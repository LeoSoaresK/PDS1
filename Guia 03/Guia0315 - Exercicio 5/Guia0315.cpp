/*
Guia0315 - vE.1 - 24/03/2021
Author: 724577 - Leo Soares

>> Comando: g++ -o Guia0315.exe Guia0315.cpp (para executar em uma janela de comandos no Windows)

Nome do arquivo: Guia0315
*/

// lista de dependencias

#include "karel.hpp" //(necessario estar na mesma pasta)
#include "io.hpp"

//definicoes de metodos

void decorateWorld(const char *fileName) //metodo para preparar o cenario (@param fileName - nome do arquivo para guardar a descricao)
{
    world->set(2, 4, HWALL); //parede
    world->set(3, 4, HWALL); //parede
    world->set(4, 4, HWALL); //parede
    world->set(5, 4, HWALL); //parede
    world->set(6, 4, HWALL); //parede
    world->set(7, 4, HWALL); //parede
    world->set(8, 4, HWALL); //parede

    world->set(2, 5, HWALL); //parede
    world->set(3, 5, HWALL); //parede
    world->set(4, 5, HWALL); //parede
    world->set(6, 5, HWALL); //parede
    world->set(7, 5, HWALL); //parede
    world->set(8, 5, HWALL); //parede

    world->set(2, 6, HWALL); //parede
    world->set(3, 6, HWALL); //parede
    world->set(4, 6, HWALL); //parede
    world->set(5, 6, HWALL); //parede
    world->set(6, 6, HWALL); //parede
    world->set(7, 6, HWALL); //parede
    world->set(8, 6, HWALL); //parede

    world->set(1, 5, VWALL); //parede
    world->set(1, 6, VWALL); //parede

    world->set(8, 5, VWALL); //parede
    world->set(8, 6, VWALL); //parede

    world->set(8, 5, BEEPER); //beeper

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

    void halfPathRight() //andar metade do caminho para a direita
    {
        if (facingEast()) //se estiver apontado para o leste
        {
            moveN(3); //andar 3 passos
        }             //end if
        else          //senao
        {
            faceEast(); //virar para o leste
            moveN(3);   //andar 3 passos
        }               //end else
    }                   //end void

    void halfPathLeft() //andar metade do caminho para a esquerda
    {
        if (facingWest()) //se estiver apontado para o oeste
        {
            moveN(3); //andar 3 passos
        }             //end if
        else          //senao
        {
            faceWest(); //virar para o oeste
            moveN(3);   //andar 3 passos
        }               //end else
    }                   //end void

}; // end class MyRobot

int main() //acao principal do robo
{
    world->create("");             // criar o mundo
    decorateWorld("Guia0315.txt"); //decorar o mundo
    world->show();                 //mostrar o mundo

    // preparar o ambiente para uso

    world->reset();              // limpar configuracoes
    world->read("Guia0315.txt"); // ler configuracao atual para o ambiente
    world->show();               // mostrar a configuracao atual
    set_Speed(3);                // definir velocidade padrao

    // criar robos

    MyRobot *robot1 = new MyRobot(); //criar robo 1
    MyRobot *robot2 = new MyRobot(); //criar robo 2

    robot1->create(8, 6, WEST, 0, "Jarel"); // posicionar robo 1 no ambiente (Jarel)
    robot2->create(2, 6, EAST, 0, "Karel"); //posicionar robo 2 no ambiente (Karel)

    // executar tarefa

    robot1->halfPathLeft();  //andar metade do caminho para a esquerda (robo 1 - Jarel)
    robot1->turnLeft();      //virar a esquerda                        (robo 1 - Jarel)
    robot1->move();          //andar                                   (robo 1 - Jarel)
    robot1->halfPathRight(); //andar metade do caminho para a direita  (robo 1 - Jarel)
    robot1->pickBeeper();    //pegar beeper                            (robo 1 - Jarel)
    robot1->halfPathLeft();  //andar metade do caminho para a esquerda (robo 1 - Jarel)
    robot1->turnRight();     //virar a direita                         (robo 1 - Jarel)
    robot1->move();          //andar                                   (robo 1 - Jarel)
    robot2->halfPathRight(); //andar metade do caminho para a direita  (robo 2- Karel)
    robot1->putBeeper();     //colocar beeper                          (robo 1 - Jarel)
    robot2->pickBeeper();    //pegar beeper                            (robo 2- Karel)
    robot1->halfPathRight(); //andar metade do caminho para a direita  (robo 1 - Jarel)
    robot1->turnAround();    //virar para a outra direcao              (robo 1 - Jarel)
    robot2->turnRight();     //virar a direita                         (robo 2- Karel)
    robot2->move();          //andar                                   (robo 2- Karel)
    robot2->halfPathLeft();  //andar metade do caminho para a esquerda (robo 2- Karel)
    robot2->putBeeper();     //colocar beeper                          (robo 2- Karel)
    robot2->halfPathRight(); //andar metade do caminho para a direita  (robo 2- Karel)
    robot2->turnLeft();      //virar a esquerda                        (robo 2- Karel)
    robot2->move();          //andar                                   (robo 2- Karel)
    robot2->halfPathLeft();  //andar metade do caminho para a esquerda (robo 2- Karel)
    robot2->turnAround();    //virar para outra direcao                (robo 2- Karel)

    robot1->turnOff(); // desligar robo 1
    robot2->turnOff(); // desligar robo 2

    world->close(); // encerrar operacoes no ambiente

    // encerrar programa

    getchar();
    return (0);
}