/*
Guia0212 - vE.1 - 11/03/2021
Author: 724577 - Leo Soares

>> Comando: g++ -o Guia0212.exe Guia0212.cpp (para executar em uma janela de comandos no Windows)

Nome do arquivo: Guia0212
*/

// lista de dependencias

#include "karel.hpp" //(necessario estar na mesma pasta)

//definicoes de metodos

void decorateWorld(const char *fileName) //metodo para preparar o cenario (@param fileName - nome do arquivo para guardar a descricao)
{

   world->set(4, 1, HWALL);
   world->set(3, 1, HWALL);
   world->set(2, 2, VWALL);
   world->set(2, 3, VWALL);
   world->set(2, 4, VWALL);
   world->set(3, 4, HWALL);
   world->set(4, 4, HWALL);
   world->set(4, 5, VWALL);
   world->set(3, 5, HWALL);
   world->set(4, 5, HWALL);
   world->set(2, 6, VWALL);
   world->set(2, 7, VWALL);
   world->set(2, 8, VWALL);
   world->set(3, 8, HWALL);
   world->set(4, 8, HWALL);
   world->set(4, 8, VWALL);
   world->set(4, 7, VWALL);
   world->set(5, 6, HWALL);
   world->set(5, 8, VWALL);
   world->set(5, 7, VWALL);
   world->set(6, 8, HWALL);
   world->set(7, 8, HWALL);
   world->set(7, 8, VWALL);
   world->set(7, 7, VWALL);
   world->set(7, 6, VWALL);
   world->set(7, 5, HWALL);
   world->set(6, 5, HWALL);
   world->set(5, 5, VWALL);
   world->set(6, 4, HWALL);
   world->set(7, 4, HWALL);
   world->set(7, 4, VWALL);
   world->set(7, 3, VWALL);
   world->set(7, 2, VWALL);
   world->set(7, 1, HWALL);
   world->set(6, 1, HWALL);
   world->set(5, 2, VWALL);
   world->set(5, 3, VWALL);
   world->set(5, 3, HWALL);
   world->set(4, 3, VWALL);
   world->set(4, 2, VWALL);

   world->set(4, 5, BEEPER);
   world->set(5, 7, BEEPER);
   world->set(6, 5, BEEPER);
   world->set(5, 3, BEEPER);

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

   void pickBeepers(int beepersInGround) //pegar multiplos beepers
   {
      if (beepersInGround > 0) //testar se a quantidade de beepers a serem pegos e maior que zero
      {
         pickBeeper();                     //pegar um beeper
         pickBeepers(beepersInGround - 1); //repetir o comando, com menos um beeper dessa vez
      }                                    //end if
   }                                       //end void

   void putBeepers(int beepersInBag) //colocar multiplos beepers
   {
      if (beepersInBag > 0) //testar se a quantidade de beepers a serem colocados e maior que zero
      {
         putBeeper();                  //colocar um beeper
         putBeepers(beepersInBag - 1); //repetir o comando, com menos um beeper dessa vez
      }                                //end if
   }                                   //end void

   void tryRight() //tentar virar a direita
   {
      if (rightIsClear()) //se a direita estiver livre
      {
         turnRight(); //virar a direita
         move();      //andar
      }
   }

   void tryLeft() //tentar virar a esquerda
   {
      if (leftIsClear()) //se a esquerda estiver livre
      {
         turnLeft(); //virar a esquerda
         move();     //andar
      }
   }

   void tryBeeper() //tentar pegar beeper
   {
      if (nextToABeeper()) //se estiver perto de beeper
      {
         pickBeeper(); //pegar beeper
      }
   }

}; // end class MyRobot

int main() //acao principal do robo
{
   world->create("");             // criar o mundo
   decorateWorld("Guia0212.txt"); //decorar o mundo
   world->show();                 //mostrar o mundo

   // preparar o ambiente para uso

   world->reset();              // limpar configuracoes
   world->read("Guia0212.txt"); // ler configuracao atual para o ambiente
   world->show();               // mostrar a configuracao atual
   set_Speed(3);                // definir velocidade padrao

   // criar robo

   MyRobot *robot = new MyRobot();
   robot->create(1, 1, EAST, 0, "Karel"); // posicionar robo no ambiente (situacao inicial):

   // executar tarefa

   robot->move(); //andar
   robot->tryLeft();
   robot->move();        //andar
   robot->move();        //andar
   robot->move();        //andar
   robot->tryRight();    //tentar virar a direita
   robot->move();        //andar
   robot->tryBeeper();   //tentar pegar beeper
   robot->turnLeft();    //tentar virar a esquerda
   robot->turnLeft();    //tentar virar a esquerda
   robot->move();        //andar
   robot->move();        //andar
   robot->tryRight();    //tentar virar a direita
   robot->move();        //andar
   robot->move();        //andar
   robot->move();        //andar
   robot->tryRight();    //tentar virar a direita
   robot->move();        //andar
   robot->move();        //andar
   robot->tryRight();    //tentar virar a direita
   robot->move();        //andar
   robot->tryBeeper();   //tentar pegar beeper
   robot->turnLeft();    //tentar virar a esquerda
   robot->turnLeft();    //tentar virar a esquerda
   robot->move();        //andar
   robot->move();        //andar
   robot->tryRight();    //tentar virar a direita
   robot->move();        //andar
   robot->move();        //andar
   robot->tryRight();    //tentar virar a direita
   robot->move();        //andar
   robot->move();        //andar
   robot->move();        //andar
   robot->tryRight();    //tentar virar a direita
   robot->move();        //andar
   robot->tryBeeper();   //tentar pegar beeper
   robot->turnLeft();    //tentar virar a esquerda
   robot->turnLeft();    //tentar virar a esquerda
   robot->move();        //andar
   robot->move();        //andar
   robot->tryRight();    //tentar virar a direita
   robot->move();        //andar
   robot->move();        //andar
   robot->move();        //andar
   robot->tryRight();    //tentar virar a direita
   robot->move();        //andar
   robot->move();        //andar
   robot->tryRight();    //tentar virar a direita
   robot->move();        //andar
   robot->tryBeeper();   //tentar pegar beeper
   robot->turnLeft();    //tentar virar a esquerda
   robot->turnLeft();    //tentar virar a esquerda
   robot->move();        //andar
   robot->move();        //andar
   robot->tryRight();    //tentar virar a direita
   robot->move();        //andar
   robot->move();        //andar
   robot->move();        //andar
   robot->turnLeft();    //tentar virar a esquerda
   robot->turnLeft();    //tentar virar a esquerda
   robot->putBeepers(4); //colocar 4 beepers

   robot->turnOff(); // desligar-se

   world->close(); // encerrar operacoes no ambiente

   // encerrar programa

   getchar();
   return (0);
}