#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// https://www.youtube.com/watch?v=F7wPi_yBrdU referencia de juego.

//declaracion de funciones

int tirar(int []);//tirada de dados
void jugar();//jugadas




int main(){
    
    //variable
    int i, j, jugadores = 0;
    int tirada = 1;
    //array
    int jugador1[5]={};
    //martiz
    int matriz[11][5];

    cout << "Ingrese la cantidad de jugadores: ";
    cin >> jugadores;
    cout << endl;
    //tirar dados
    tirar(jugador1);

    //mostrar
    for (j; j <= 3; j++){
        //numero de tirada
        cout << "tirada n°: " << j << "\n ";
        for (i; i < 5; i++){
            cout << jugador1[i] << " ";
        }
        cout << endl;
    }

    //creacion de matriz
    for (int i=0; i<11; i++){
        for (int j=0; j<jugadores; j++){
            matriz[i][j] = jugador1[i];
            //mostrar puntaje
            cout << matriz[i][j] << " ";
    
        }
        cout << endl;
    }
  

    return 0;
}


//definicion de funciones

int tirar(int juego[]){
    //variables
    int i, num= 0;
    srand(time(0));
    //for
    for (i; i < 5; i++){
        juego[i] += 1+(rand()%6);
    }
    return *juego;
}

void jugar(){}

















/*
// datos de jugadas en codigo

//(dobles)[servida(1 tiro = 15 ), armada(2-3tiros = 10)]
// 2 pares de dados iguales y 1 dado distinto

//(escalera)[servida(1 tiro = 25 ), armada(2-3tiros = 20)] 
// 1 -1,2,3,4,5
// 2 -2,3,4,5,6
// 3 -3,4,5,6,1

//(full)[servida(1 tiro = 35 ), armada(2-3tiros = 30)]
// 2 dados iguales y 3 dados iguales

//(poker)[servida(1 tiro = 45 ), armada(2-3tiros = 40)]
// 4 dados iguales y 1 dado distinto

//(generala)[(2-3 tiro = 50 )]

//(generala doble)[(2-3 tiro = 50)](generala x2)

//(generala servida)[(1 tiro = gana partida)](generala x2)
*/


/*-const char *cuadro =

   "•-----------------------------------------------•\n"
   "| Generala  | Jugador 1 | Jugador 2 | Jugador 3 |\n"
   "•-----------------------------------------------•\n"
   "|    1      |           |           |           |\n"
   "•-----------------------------------------------•\n"
   "|    2      |           |           |           |\n"
   "•-----------------------------------------------•\n"
   "|    3      |           |           |           |\n"
   "•-----------------------------------------------•\n"
   "|    4      |           |           |           |\n"
   "•-----------------------------------------------•\n"
   "|    5      |           |           |           |\n"
   "•-----------------------------------------------•\n"
   "|    6      |           |           |           |\n"
   "•-----------------------------------------------•\n"
   "|    E      |           |           |           |\n"
   "•-----------------------------------------------•\n"
   "|    F      |           |           |           |\n"
   "•-----------------------------------------------•\n"
   "|    P      |           |           |           |\n"
   "•-----------------------------------------------•\n"
   "|    G      |           |           |           |\n"
   "•-----------------------------------------------•\n"
   "|    DG     |           |           |           |\n"
   "•-----------------------------------------------•\n";
*/

/*const char *Top3 = 
   
   "•-----------------------------------------------•\n"
   "|                  TOP 3 RANK                   |\n"
   "•-----------------------------------------------•\n"
   "| ID jugada |  Nombre   |   Fecha   |  Puntaje  |\n"
   "•-----------------------------------------------•\n"
   "|           |           |           |           |\n"
   "•-----------------------------------------------•\n"
   "|           |           |           |           |\n"
   "•-----------------------------------------------•\n
   "|           |           |           |           |\n"
   "•-----------------------------------------------•\n
*/






