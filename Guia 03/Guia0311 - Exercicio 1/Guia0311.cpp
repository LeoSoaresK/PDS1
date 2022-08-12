/*
Guia0311 - vE.1 - 24/03/2021
Author: 724577 - Leo Soares

>> Comando: g++ -o Guia0311.exe Guia0311.cpp (para executar em uma janela de comandos no Windows)

Nome do arquivo: Guia0311
*/

// lista de dependencias

#include "karel.hpp" //(necessario estar na mesma pasta)

//definicoes de metodos

void decorateWorld(const char *fileName) //metodo para preparar o cenario (@param fileName - nome do arquivo para guardar a descricao)
{
    world->set(2, 2, HWALL); //parede
    world->set(3, 2, HWALL); //parede
    world->set(4, 2, HWALL); //parede

    world->set(2, 7, HWALL); //parede
    world->set(3, 7, HWALL); //parede
    world->set(4, 7, HWALL); //parede

    world->set(1, 3, VWALL); //parede
    world->set(1, 4, VWALL); //parede
    world->set(1, 5, VWALL); //parede
    world->set(1, 6, VWALL); //parede
    world->set(1, 7, VWALL); //parede

    world->set(4, 3, VWALL); //parede
    world->set(4, 4, VWALL); //parede
    world->set(4, 5, VWALL); //parede
    world->set(4, 6, VWALL); //parede
    world->set(4, 7, VWALL); //parede

    world->set(6, 2, HWALL); //parede
    world->set(7, 2, HWALL); //parede
    world->set(8, 2, HWALL); //parede

    world->set(6, 7, HWALL); //parede
    world->set(7, 7, HWALL); //parede
    world->set(8, 7, HWALL); //parede

    world->set(5, 3, VWALL); //parede
    world->set(5, 4, VWALL); //parede
    world->set(5, 5, VWALL); //parede
    world->set(5, 6, VWALL); //parede
    world->set(5, 7, VWALL); //parede

    world->set(8, 3, VWALL); //parede
    world->set(8, 4, VWALL); //parede
    world->set(8, 5, VWALL); //parede
    world->set(8, 6, VWALL); //parede
    world->set(8, 7, VWALL); //parede

    world->set(3, 2, BEEPER); //beeper
    world->set(1, 5, BEEPER); //beeper
    world->set(3, 8, BEEPER); //beeper

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

}; // end class MyRobot

int main() //acao principal do robo
{
    world->create("");             // criar o mundo
    decorateWorld("Guia0311.txt"); //decorar o mundo
    world->show();                 //mostrar o mundo

    // preparar o ambiente para uso

    world->reset();              // limpar configuracoes
    world->read("Guia0311.txt"); // ler configuracao atual para o ambiente
    world->show();               // mostrar a configuracao atual
    set_Speed(3);                // definir velocidade padrao

    // criar robo

    MyRobot *robot = new MyRobot();
    robot->create(1, 1, EAST, 0, "Karel"); // posicionar robo no ambiente (situacao inicial):

    // executar tarefa

    robot->moveN(2);     //andar
    robot->turnLeft();   //virar a esquerda
    robot->move();       //andar
    robot->pickBeeper(); //pegar beeper
    robot->turnLeft();   //virar a esquerda
    robot->moveN(2);     //andar
    robot->turnRight();  //virar a direita
    robot->moveN(3);     //andar
    robot->pickBeeper(); //pegar beeper
    robot->moveN(3);     //andar
    robot->turnRight();  //virar a direita
    robot->moveN(2);     //andar
    robot->pickBeeper(); //pegar beeper
    robot->moveN(2);     //andar
    robot->turnRight();  //virar a direita
    robot->moveN(6);     //andar
    robot->turnLeft();   //virar a esquerda
    robot->moveN(2);     //andar
    robot->putBeeper();  //colocar beeper
    robot->moveN(2);     //andar
    robot->turnLeft();   //virar a esquerda
    robot->moveN(3);     //andar
    robot->putBeeper();  //colocar beeper
    robot->moveN(3);     //andar
    robot->turnLeft();   //virar a esquerda
    robot->moveN(2);     //andar
    robot->putBeeper();  //colocar beeper
    robot->moveN(2);     //andar
    robot->turnLeft();   //virar a esquerda
    robot->moveN(7);     //andar
    robot->turnRight();  //virar a direita
    robot->moveN(4);     //andar
    robot->turnLeft();   //virar a esquerda
    robot->turnLeft();   //virar a esquerda

    robot->turnOff(); // desligar-se

    world->close(); // encerrar operacoes no ambiente

    // encerrar programa

    getchar();
    return (0);
}