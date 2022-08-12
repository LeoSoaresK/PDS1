/*
Guia0313 - vE.1 - 24/03/2021
Author: 724577 - Leo Soares

>> Comando: g++ -o Guia0313.exe Guia0313.cpp (para executar em uma janela de comandos no Windows)

Nome do arquivo: Guia0313
*/

// lista de dependencias

#include "karel.hpp" //(necessario estar na mesma pasta)
#include "io.hpp"

//definicoes de metodos

void decorateWorld(const char *fileName) //metodo para preparar o cenario (@param fileName - nome do arquivo para guardar a descricao)
{
    world->set(1, 3, VWALL); //parede
    world->set(1, 4, VWALL); //parede
    world->set(1, 5, VWALL); //parede
    world->set(1, 6, VWALL); //parede
    world->set(1, 7, VWALL); //parede
    world->set(1, 8, VWALL); //parede

    world->set(2, 4, VWALL); //parede
    world->set(2, 5, VWALL); //parede
    world->set(2, 6, VWALL); //parede
    world->set(2, 7, VWALL); //parede

    world->set(3, 5, VWALL); //parede
    world->set(3, 6, VWALL); //parede

    world->set(4, 7, VWALL); //parede

    world->set(5, 7, VWALL); //parede

    world->set(6, 5, VWALL); //parede
    world->set(6, 6, VWALL); //parede

    world->set(7, 3, VWALL); //parede
    world->set(7, 4, VWALL); //parede
    world->set(7, 5, VWALL); //parede
    world->set(7, 6, VWALL); //parede
    world->set(7, 7, VWALL); //parede

    world->set(2, 2, HWALL); //parede
    world->set(3, 2, HWALL); //parede
    world->set(4, 2, HWALL); //parede
    world->set(5, 2, HWALL); //parede
    world->set(6, 2, HWALL); //parede
    world->set(7, 2, HWALL); //parede

    world->set(5, 4, HWALL); //parede
    world->set(6, 4, HWALL); //parede

    world->set(4, 6, HWALL); //parede
    world->set(6, 6, HWALL); //parede

    world->set(3, 7, HWALL); //parede
    world->set(4, 7, HWALL); //parede
    world->set(5, 7, HWALL); //parede
    world->set(6, 7, HWALL); //parede
    world->set(7, 7, HWALL); //parede

    world->set(2, 8, HWALL); //parede
    world->set(3, 8, HWALL); //parede
    world->set(4, 8, HWALL); //parede
    world->set(5, 8, HWALL); //parede
    world->set(6, 8, HWALL); //parede
    world->set(7, 8, HWALL); //parede

    world->set(4, 7, BEEPER); //beeper

    world->set(5, 7, BEEPER); //beeper
    world->set(5, 7, BEEPER); //beeper

    world->set(6, 7, BEEPER); //beeper
    world->set(6, 7, BEEPER); //beeper
    world->set(6, 7, BEEPER); //beeper

    world->save(fileName); // salvar a configuracao atual do mundo
}

class MyRobot : public Robot //definir robo particular (MyRobot) a partir do modelo generico (Robot)
{

public:
    void turnRight() //procecimento para virar a direita
    {
        if (checkStatus()) // testar se o robo esta' ativo
        {
            turnLeft();
            turnLeft();
            turnLeft();
        } // end if
    }     // end turnRight ( )

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
        }                 //end if
    }                     //end void

    void putBeepers() //colocar multiplos beepers
    {
        while (beepersInBag()) //testar se a quantidade de beepers a serem colocados e maior que zero
        {
            putBeeper(); //colocar um beeper
        }                //end if
    }                    //end void

    void turnAround() //virar para a outra direcao
    {
        turnLeft(); //virar a esquerda
        turnLeft(); //virar a esquerda
    }

    void turnAroundCornerLeft() //curva fechada a esquerda
    {
        move();     //andar
        turnLeft(); //virar a esquerda
        move();     //andar
    }

    void turnAroundCornerRight() //curva fechada a direita
    {
        move();
        turnRight(); //virar a direita
        move();
    }

    void walkAndTurnRight() //andar ate poder virar a direita
    {
        if (rightIsClear()) //se a direita estiver livre
        {
            turnRight(); //virar a direita
            move();      //andar
        }
        else //senao
        {
            move();             //andar
            walkAndTurnRight(); //repetir o comando
        }
    }

    void walkAndTurnLeft() //andar ate poder virar a esquerda
    {
        if (leftIsClear()) //se a esquerda estiver livre
        {
            turnLeft(); //virar a esquerda
            move();     //andar
        }
        else //senao
        {
            move();            //andar
            walkAndTurnLeft(); //repetir o comando
        }
    }

    void pickAndRecord() //pegar beeper e registrar a posicao
    {
        int x, y, z = 0;                                              //coordenadas (x,y) e contador de beepers "z"
        std::ofstream arquivo("Coordenadas_0313.txt", std::ios::app); //criar arquivo para gravação

        while (nextToABeeper()) //se perto de um beeper
        {
            pickBeeper();  //pegar beeper
            x = xAvenue(); //x = avenida
            y = yStreet(); //y = rua
            z = z + 1;     //adicionar um ao contador de beepers

        }                          //end while
        arquivo << x << std::endl; //registrar x
        arquivo << y << std::endl; //registrar y
        arquivo << z << std::endl; //registrar z
        arquivo.close();           //salvar arquivo
    }                              //end void

}; // end class MyRobot

int main() //acao principal do robo
{
    world->create("");             // criar o mundo
    decorateWorld("Guia0313.txt"); //decorar o mundo
    world->show();                 //mostrar o mundo

    // preparar o ambiente para uso

    world->reset();              // limpar configuracoes
    world->read("Guia0313.txt"); // ler configuracao atual para o ambiente
    world->show();               // mostrar a configuracao atual
    set_Speed(1);                // definir velocidade padrao

    // criar robo

    MyRobot *robot = new MyRobot();
    robot->create(1, 1, EAST, 0, "Karel"); // posicionar robo no ambiente (situacao inicial):

    // executar tarefa

    robot->turnLeft();              //virar a esquerda
    robot->moveN(2);                //andar
    robot->walkAndTurnRight();      //andar ate poder virar a direita
    robot->walkAndTurnRight();      //andar ate poder virar a direita
    robot->turnRight();             //virar a direita
    robot->move();                  //andar
    robot->walkAndTurnLeft();       //andar ate poder virar a esquerda
    robot->walkAndTurnLeft();       //andar ate poder virar a esquerda
    robot->turnLeft();              //virar a esquerda
    robot->moveN(2);                //andar
    robot->walkAndTurnRight();      //andar ate poder virar a direita
    robot->pickAndRecord();         //pegar beeper e registrar posicao e quantidade de beepers pegos
    robot->turnAround();            //virar para a outra direcao
    robot->turnAroundCornerLeft();  //curva fechada a esquerda
    robot->walkAndTurnLeft();       //andar ate poder virar a esquerda
    robot->turnLeft();              //virar a esquerda
    robot->moveN(2);                //andar
    robot->turnRight();             //virar a direita
    robot->turnAroundCornerLeft();  //curva fechada a esquerda
    robot->pickAndRecord();         //pegar beeper e registrar posicao e quantidade de beepers pegos
    robot->turnAround();            //virar para a outra direcao
    robot->moveN(2);                //andar
    robot->turnRight();             //virar a direita
    robot->turnAroundCornerLeft();  //curva fechada a esquerda
    robot->turnLeft();              //virar a esquerda
    robot->moveN(2);                //andar
    robot->turnAroundCornerLeft();  //curva fechada a esquerda
    robot->move();                  //andar
    robot->turnAroundCornerLeft();  //curva fechada a esquerda
    robot->pickAndRecord();         //pegar beeper e registrar posicao e quantidade de beepers pegos
    robot->turnAround();            //virar para a outra direcao
    robot->turnAroundCornerRight(); //curva fechada a direita
    robot->moveN(3);                //andar
    robot->turnRight();             //virar a direita
    robot->moveN(5);                //andar
    robot->turnRight();             //virar a direita
    robot->move();                  //andar
    robot->walkAndTurnRight();      //andar ate poder virar a direita
    robot->walkAndTurnRight();      //andar ate poder virar a direita
    robot->walkAndTurnRight();      //andar ate poder virar a direita
    robot->moveN(5);                //andar
    robot->turnAroundCornerLeft();  //curva fechada a esquerda
    robot->turnLeft();              //virar a esquerda

    robot->turnOff(); // desligar-se

    world->close(); // encerrar operacoes no ambiente

    // encerrar programa

    getchar();
    return (0);
}