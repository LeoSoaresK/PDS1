/*
Guia0215 - vE.1 - 11/03/2021
Author: 724577 - Leo Soares

>> Comando: g++ -o Guia0215.exe Guia0215.cpp (para executar em uma janela de comandos no Windows)

Nome do arquivo: Guia0215
*/

// lista de dependencias

#include "karel.hpp" //(necessario estar na mesma pasta)
#include "io.hpp"    //(necessario estar na mesma pasta)

//definicoes de metodos

void decorateWorld(const char *fileName) //metodo para preparar o cenario (@param fileName - nome do arquivo para guardar a descricao)
{

   world->set(3, 2, HWALL); //parede
   world->set(4, 2, HWALL); //parede
   world->set(5, 2, HWALL); //parede

   world->set(2, 3, VWALL); //parede
   world->set(2, 4, VWALL); //parede
   world->set(2, 5, VWALL); //parede
   world->set(2, 6, VWALL); //parede
   world->set(2, 7, VWALL); //parede
   world->set(2, 8, VWALL); //parede

   world->set(5, 3, VWALL); //parede
   world->set(5, 4, VWALL); //parede
   world->set(5, 5, VWALL); //parede
   world->set(5, 6, VWALL); //parede
   world->set(5, 7, VWALL); //parede
   world->set(5, 8, VWALL); //parede

   world->set(3, 3, VWALL); //parede
   world->set(3, 4, VWALL); //parede
   world->set(3, 5, VWALL); //parede
   world->set(3, 6, VWALL); //parede
   world->set(3, 7, VWALL); //parede

   world->set(4, 3, VWALL); //parede
   world->set(4, 4, VWALL); //parede
   world->set(4, 5, VWALL); //parede
   world->set(4, 6, VWALL); //parede
   world->set(4, 7, VWALL); //parede

   world->set(3, 8, HWALL); //parede
   world->set(5, 8, HWALL); //parede

   world->set(3, 3, BEEPER); //beeper
   world->set(3, 3, BEEPER); //beeper
   world->set(3, 3, BEEPER); //beeper

   world->set(4, 3, BEEPER); //beeper
   world->set(4, 3, BEEPER); //beeper
   world->set(4, 3, BEEPER); //beeper

   world->set(4, 4, BEEPER); //beeper
   world->set(4, 4, BEEPER); //beeper

   world->set(5, 3, BEEPER); //beeper
   world->set(5, 3, BEEPER); //beeper
   world->set(5, 3, BEEPER); //beeper

   world->set(5, 4, BEEPER); //beeper
   world->set(5, 4, BEEPER); //beeper

   world->set(5, 5, BEEPER); //beeper

   world->save(fileName); // salvar a configuracao atual do mundo
}

class MyRobot : public Robot //definir robo particular (MyRobot) a partir do modelo generico (Robot)
{

public:
   void turnRight() //procecimento para virar a direita
   {
      if (checkStatus()) // testar se o robo esta' ativo
      {
         // o agente que executar esse metodo devera virar tres vezes para a esquerda
         turnLeft();
         turnLeft();
         turnLeft();
      } // end if
   }    // end turnRight ( )

   void moveN(int steps)
   {
      if (steps > 0) // testar se a quantidade de passos e' maior que zero
      {
         move();           // dar um passo
         moveN(steps - 1); // tentar fazer de novo, com menos um passo dessa vez
      }
   }

   void pickBeepers() //pegar multiplos beepers
   {
      while (nextToABeeper()) //testar se a quantidade de beepers a serem pegos e maior que zero
      {
         pickBeeper(); //pegar um beeper
      }                //end if
   }                   //end void

   void putBeepers(int beepersInBag) //colocar multiplos beepers
   {
      if (beepersInBag > 0) //testar se a quantidade de beepers a serem colocados e maior que zero
      {
         putBeeper();                  //colocar um beeper
         putBeepers(beepersInBag - 1); //repetir o comando, com menos um beeper dessa vez
      }                                //end if
   }                                   //end void

   /**
* execute - Metodo para executar um comando.
* @param action - comando a ser executado
*/
   void execute(int option)
   {
      // executar a opcao de comando
      switch (option)
      {
      case 0: // terminar
         // nao fazer nada
         break;
      case 1: // virar para a esquerda
         if (leftIsClear())
         {
            turnLeft();
         } // end if
         break;
      case 2: // virar para o sul
         while (!facingSouth())
         {
            turnLeft();
         } // end while
         break;
      case 3: // virar para a direita
         if (rightIsClear())
         {
            turnRight();
         } // end if
         break;
      case 4: // virar para o oeste
         while (!facingWest())
         {
            turnLeft();
         } // end while
         break;
      case 5: // mover
         if (frontIsClear())
         {
            move();
         } // end if
         break;
      case 6: // virar para o leste
         while (!facingEast())
         {
            turnLeft();
         } // end while
         break;
      case 7: // pegar marcador
         if (nextToABeeper())
         {
            pickBeeper();
         } // end if
         break;
      case 8: // virar para o norte
         while (!facingNorth())
         {
            turnLeft();
         } // end while
         break;
      case 9: // colocar marcador
         if (beepersInBag())
         {
            putBeeper();
         } // end if
         break;
      default: // nenhuma das alternativas anteriores
         // comando invalido
         show_Error("ERROR: Invalid command.");
      } // end switch
   }    // end execute( )
   /**
* moveI - Metodo para mover o robot interativamente.
* Lista de comandos disponiveis:
* 0 - turnOff
* 1 - turnLeft
* 2 - to South
* 3 - turnRight
* 4 - to West
* 5 - move
* 6 - to East
* 7 - pickBeeper
* 8 - to North
* 9 - putBeeper
*/
   void moveI()
   {
      // definir dados
      int action;
      // repetir (com testes no fim)
      // enquanto opcao diferente de zero
      do
      {
         // ler opcao
         action = IO_readint("Command? ");
         // executar acao dependente da opcao
         execute(action);
      } while (action != 0);
   } // end moveI( )

}; // end class MyRobot

int main() //acao principal do robo
{
   world->create("");             // criar o mundo
   decorateWorld("Guia0215.txt"); //decorar o mundo
   world->show();                 //mostrar o mundo

   // preparar o ambiente para uso

   world->reset();              // limpar configuracoes
   world->read("Guia0215.txt"); // ler configuracao atual para o ambiente
   world->show();               // mostrar a configuracao atual
   set_Speed(3);                // definir velocidade padrao

   // criar robo

   MyRobot *robot = new MyRobot();
   robot->create(1, 1, EAST, 0, "Karel"); // posicionar robo no ambiente (situacao inicial):

   // executar tarefa

   robot->moveI();

   robot->turnOff(); // desligar-se

   world->close(); // encerrar operacoes no ambiente

   // encerrar programa

   getchar();
   return (0);
}