/*
Guia0314 - vE.1 - 24/03/2021
Author: 724577 - Leo Soares

>> Comando: g++ -o Guia0314.exe Guia0314.cpp (para executar em uma janela de comandos no Windows)

Nome do arquivo: Guia0314
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

    world->set(4, 5, VWALL); //parede
    world->set(4, 7, VWALL); //parede

    world->set(5, 5, VWALL); //parede
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

    world->set(3, 3, HWALL); //parede

    world->set(5, 4, HWALL); //parede

    world->set(5, 5, HWALL); //parede

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

    world->set(6, 7, BEEPER); //beeper

    world->set(5, 6, BEEPER); //beeper
    world->set(5, 6, BEEPER); //beeper

    world->set(4, 7, BEEPER); //beeper
    world->set(4, 7, BEEPER); //beeper
    world->set(4, 7, BEEPER); //beeper

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
        move();      //andar
        turnRight(); //virar a direita
        move();      //andar
    }

    void moveAndRecord(int s) //andar e registrar a posicao
    {
        int x, y;
        std::ofstream arquivo("Coordenadas_0214.txt", std::ios::app); //criar arquivo para gravação

        if (s > 0)
        {
            move();                    //andar
            x = xAvenue();             //x = avenida
            y = yStreet();             //y = rua
            arquivo << x << std::endl; //registrar x
            arquivo << y << std::endl; //registrar y
            arquivo.close();           //salvar arquivo
            moveAndRecord(s - 1);      //repetir o comando, com menos um passo dessa vez
        }
    }

}; // end class MyRobot

int main() //acao principal do robo
{
    world->create("");             // criar o mundo
    decorateWorld("Guia0314.txt"); //decorar o mundo
    world->show();                 //mostrar o mundo

    // preparar o ambiente para uso

    world->reset();              // limpar configuracoes
    world->read("Guia0314.txt"); // ler configuracao atual para o ambiente
    world->show();               // mostrar a configuracao atual
    set_Speed(1);                // definir velocidade padrao

    // criar robo

    MyRobot *robot = new MyRobot();
    robot->create(1, 1, EAST, 0, "Karel"); // posicionar robo no ambiente (situacao inicial):

    // executar tarefa

    robot->turnLeft();       //virar a esquerda
    robot->moveAndRecord(8); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(7); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(1); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(6); //andar
    robot->turnLeft();       //virar a esquerda
    robot->moveAndRecord(5); //andar
    robot->turnLeft();       //virar a esquerda
    robot->moveAndRecord(5); //andar
    robot->turnLeft();       //virar a esquerda
    robot->moveAndRecord(4); //andar
    robot->turnLeft();       //virar a esquerda
    robot->moveAndRecord(1); //andar
    robot->pickBeeper();     //pegar beepers
    robot->turnAround();     //virar para a outra direcao
    robot->moveAndRecord(1); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(3); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(1); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(2); //andar
    robot->turnLeft();       //virar a esquerda
    robot->moveAndRecord(1); //andar
    robot->pickBeepers();    //pegar beepers
    robot->moveAndRecord(1); //andar
    robot->turnLeft();       //virar a esquerda
    robot->moveAndRecord(2); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(1); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(3); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(1); //andar
    robot->pickBeepers();    //pegar beepers
    robot->turnAround();     //virar para a outra direcao
    robot->moveAndRecord(1); //andar
    robot->turnLeft();       //virar a esquerda
    robot->moveAndRecord(3); //andar
    robot->turnLeft();       //virar a esquerda
    robot->moveAndRecord(1); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(1); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(2); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(5); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(6); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(7); //andar
    robot->turnRight();      //virar a direita
    robot->moveAndRecord(7); //andar
    robot->turnAround();     //virar para a outra direcao

    robot->turnOff(); // desligar-se

    world->close(); // encerrar operacoes no ambiente

    // encerrar programa

    getchar();
    return (0);
}