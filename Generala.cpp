#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// https://www.youtube.com/watch?v=F7wPi_yBrdU referencia de juego.

//funciones:
//int tirar(int juego[]){
//    srand(time(0));
//    for (i = 0; i < 5; i++){
//        cout << 1+(rand()%6) <<endl; // tirardor random
//    }
    
//}//incompleto
//void jugar(){

//}

//datos
int participantes = 0;
int puntaje = 0;
int i = 0;



int main(){
    cout << "Ingrese la cantidad de participantes" << endl;
//    cin >> participantes;

//    while (participantes >= 3 && participantes < 6)
//    {
        
//    }
    srand(time(0));
    for (i = 0; i < 5; i++){
        cout << 1+(rand()%6) <<endl; // tirardor random
    }

    cin >> puntaje;
    return 0;
}

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
