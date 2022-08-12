/*
Guia0211 - vE.1 - 11/03/2021
Author: 724577 - Leo Soares

>> Comando: g++ -o Guia0211.exe Guia0211.cpp (para executar em uma janela de comandos no Windows)

Nome do arquivo: Guia0211
*/

// lista de dependencias

#include "karel.hpp" //(necessario estar na mesma pasta)

//definicoes de metodos

void decorateWorld(const char *fileName) //metodo para preparar o cenario (@param fileName - nome do arquivo para guardar a descricao)
{
    world->set(2, 1, VWALL); //degrau
    world->set(3, 1, HWALL); //degrau
    world->set(3, 2, VWALL); //degrau
    world->set(4, 2, HWALL); //degrau
    world->set(4, 3, VWALL); //degrau
    world->set(5, 3, HWALL); //degrau
    world->set(6, 3, HWALL); //degrau
    world->set(6, 3, VWALL); //degrau
    world->set(7, 2, HWALL); //degrau
    world->set(7, 2, VWALL); //degrau
    world->set(8, 1, HWALL); //degrau
    world->set(8, 1, VWALL); //degrau

    world->set(9, 1, BEEPER); //beeper na posicao 9,1
    world->set(9, 1, BEEPER); //outro beeper na posicao 9,1
    world->set(9, 1, BEEPER); //outro beeper na posicao 9,1

    world->set(8, 2, BEEPER); //beeper na posicao 8,2
    world->set(8, 2, BEEPER); //outro beeper na posicao 8,2

    world->set(7, 3, BEEPER); //beeper na posicao 7,3

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

    void stepUpRight() //subir um degrau a direita
    {
        turnLeft();
        move();
        turnRight();
        move();
    }

    void stepDownRight() //descer um degrau a direita
    {
        move();
        turnRight();
        move();
        turnLeft();
    }

    void stepUpLeft() //subir um degrau a esquerda
    {
        turnRight();
        move();
        turnLeft();
        move();
    }

    void stepDownLeft() //descer um degrau a esquerda
    {
        move();
        turnLeft();
        move();
        turnRight();
    }

}; // end class MyRobot

int main() //acao principal do robo
{
    world->create("");             // criar o mundo
    decorateWorld("Guia0211.txt"); //decorar o mundo
    world->show();                 //mostrar o mundo

    // preparar o ambiente para uso

    world->reset();              // limpar configuracoes
    world->read("Guia0211.txt"); // ler configuracao atual para o ambiente
    world->show();               // mostrar a configuracao atual
    set_Speed(3);                // definir velocidade padrao

    // criar robo

    MyRobot *robot = new MyRobot();
    robot->create(1, 1, EAST, 0, "Karel"); // posicionar robo no ambiente (situacao inicial):

    // executar tarefa

    robot->move();          //andar
    robot->stepUpRight();   //subir um degrau a direita
    robot->stepUpRight();   //subir um degrau a direita
    robot->stepUpRight();   //subir um degrau a direita
    robot->move();          //andar
    robot->stepDownRight(); //descer um degrau a direita
    robot->stepDownRight(); //descer um degrau a direita
    robot->stepDownRight(); //descer um degrau a direita
    robot->turnLeft();      //virar a esquerda
    robot->turnLeft();      //virar a esquerda
    robot->pickBeepers(3);  //pegar 3 beepers
    robot->stepUpLeft();    //subir um degrau a esquerda
    robot->pickBeepers(2);  //pegar 2 beepers
    robot->stepUpLeft();    //subir um degrau a esquerda
    robot->pickBeepers(1);  //pegar 1 beeper
    robot->stepUpLeft();    //subir um degrau a esquerda
    robot->move();          //andar
    robot->stepDownLeft();  //descer um degrau a esquerda
    robot->putBeepers(1);   //deixar 1 beeper
    robot->stepDownLeft();  //descer um degrau a esquerda
    robot->putBeepers(2);   //deixar 2 beepers
    robot->stepDownLeft();  //descer um degrau a esquerda
    robot->putBeepers(3);   //deixar 3 beepers
    robot->move();          //andar
    robot->turnLeft();      //virar a esquerda
    robot->turnLeft();      //virar a esquerda

    robot->turnOff(); // desligar-se

    world->close(); // encerrar operacoes no ambiente

    // encerrar programa

    getchar();
    return (0);
}