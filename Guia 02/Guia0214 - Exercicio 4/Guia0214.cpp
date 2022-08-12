/*
Guia0214 - vE.1 - 11/03/2021
Author: 724577 - Leo Soares

>> Comando: g++ -o Guia0214.exe Guia0214.cpp (para executar em uma janela de comandos no Windows)

Nome do arquivo: Guia0214
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
    }     // end turnRight ( )

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
        }                                     //end if
    }                                         //end void

    void putBeepers(int beepersInBag) //colocar multiplos beepers
    {
        if (beepersInBag > 0) //testar se a quantidade de beepers a serem colocados e maior que zero
        {
            putBeeper();                  //colocar um beeper
            putBeepers(beepersInBag - 1); //repetir o comando, com menos um beeper dessa vez
        }                                 //end if
    }                                     //end void

    void tryPutBeepers() //tentar por beepers
    {
        if (areYouHere(9, 1)) //se etiver na posicao indicada
        {
            while (beepersInBag()) //se estiver com beepers na bag
            {
                putBeeper(); //colocar beeper
            }                //end while
        }                    //end if
    }                        //end void

    void pickAndRecord() //pegar beeper e registrar a posicao
    {
        int x, y;
        std::ofstream arquivo("Coordenadas_0214.txt", std::ios::app); //criar arquivo para gravação

        while (nextToABeeper()) //se perto de um beeper
        {
            pickBeeper();              //pegar beeper
            x = xAvenue();             //x = avenida
            y = yStreet();             //y = rua
            arquivo << x << std::endl; //registrar x
            arquivo << y << std::endl; //registrar y
            arquivo.close();           //salvar arquivo
        }                              //end while
    }                                  //end void

    /**
recordActions - Metodo para mover o robot interativamente
e guardar a descricao da tarefa em arquivo.
@param fileName - nome do arquivo
*/

    void pickAndRecord() //pegar beeper e registrar a posicao
    {
        int x, y;
        std::ofstream arquivo("Coordenadas_0214.txt", std::ios::app); //criar arquivo para gravação

        while (nextToABeeper()) //se perto de um beeper
        {
            pickBeeper();              //pegar beeper
            x = xAvenue();             //x = avenida
            y = yStreet();             //y = rua
            arquivo << x << std::endl; //registrar x
            arquivo << y << std::endl; //registrar y
            arquivo.close();           //salvar arquivo
        }                              //end while
    }                                  //end void

}; // end class MyRobot

int main() //acao principal do robo
{
    world->create("");             // criar o mundo
    decorateWorld("Guia0214.txt"); //decorar o mundo
    world->show();                 //mostrar o mundo

    // preparar o ambiente para uso

    world->reset();              // limpar configuracoes
    world->read("Guia0214.txt"); // ler configuracao atual para o ambiente
    world->show();               // mostrar a configuracao atual
    set_Speed(3);                // definir velocidade padrao

    // criar robo

    MyRobot *robot = new MyRobot();
    robot->create(1, 1, EAST, 0, "Karel"); // posicionar robo no ambiente (situacao inicial):

    // executar tarefa

    robot->move();          //andar
    robot->turnLeft();      //virar a esquerda
    robot->moveN(8);        //andar
    robot->turnRight();     //virar a direita
    robot->moveN(2);        //andar
    robot->turnRight();     //virar a direita
    robot->move();          //andar
    robot->turnLeft();      //virar a esquerda
    robot->move();          //andar
    robot->turnRight();     //virar a direita
    robot->moveN(3);        //andar
    robot->pickAndRecord(); //pegar beeper e registrar a posicao
    robot->move();          //andar
    robot->pickAndRecord(); //pegar beeper e registrar a posicao
    robot->turnLeft();      //virar a esquerda
    robot->turnLeft();      //virar a esquerda
    robot->moveN(4);        //andar
    robot->turnLeft();      //virar a esquerda
    robot->move();          //andar
    robot->turnLeft();      //virar a esquerda
    robot->moveN(4);        //andar
    robot->pickAndRecord(); //pegar beeper e registrar a posicao
    robot->move();          //andar
    robot->pickAndRecord(); //pegar beeper e registrar a posicao
    robot->turnLeft();      //virar a esquerda
    robot->turnLeft();      //virar a esquerda
    robot->moveN(5);        //andar
    robot->turnLeft();      //virar a esquerda
    robot->move();          //andar
    robot->turnLeft();      //virar a esquerda
    robot->moveN(5);        //andar
    robot->pickAndRecord(); //pegar beeper e registrar a posicao
    robot->turnLeft();      //virar a esquerda
    robot->turnLeft();      //virar a esquerda
    robot->moveN(5);        //andar
    robot->turnRight();     //virar a direita
    robot->moveN(2);        //andar
    robot->turnRight();     //virar a direita
    robot->moveN(5);        //andar
    robot->pickAndRecord(); //pegar beeper e registrar a posicao
    robot->turnLeft();      //virar a esquerda
    robot->turnLeft();      //virar a esquerda
    robot->moveN(5);        //andar
    robot->turnLeft();      //virar a esquerda
    robot->move();          //andar
    robot->turnRight();     //virar a direita
    robot->move();          //andar
    robot->turnRight();     //virar a direita
    robot->moveN(3);        //andar
    robot->turnRight();     //virar a direita
    robot->moveN(8);        //andar
    robot->putBeepers(14);  //colocar beepers
    robot->turnRight();     //virar a direita
    robot->moveN(6);        //andar
    robot->turnLeft();      //virar a esquerda
    robot->turnLeft();      //virar a esquerda

    robot->turnOff(); // desligar-se

    world->close(); // encerrar operacoes no ambiente

    // encerrar programa

    getchar();
    return (0);
}