#include <iostream>
#include "Tablero.h"
#include "Camino.h"
#include "Abismo.h"
#include "Salida.h"
#include "Juego.h"
#include "Tablero.h"
#include "LogicaDeMovimiento.h"
#include "VistaConsola.h"
#include "Avatar.h"
#include "AvatarCPU.h"
#include "LogicaMovimientoAleatorio.h"
#include "AvatarInnovador.h"
#include "LogicaMovimientoInnovador.h"
#include <iostream>
#include <cstdlib> // Para system

int main() {

        // Crear un tablero
        Tablero tablero;
        // Cargar el tablero desde un archivo
        tablero.cargarDesdeArchivo("dataTablero.txt");
       Avatar avatar;
        avatar.setPosicionFila(2);
        avatar.setPosicionColumna(2);
        LogicaDeMovimiento logicaDeMovimiento;
        Juego juego(&tablero, &avatar, &logicaDeMovimiento, true);
       
        juego.iniciar();
        VistaConsola vista(&tablero, &avatar);
        do{
        vista.mostrarJuego();
        vista.mostrarMensaje("Digite su movimiento:");
        juego.play(vista.getEntradaConsola());
        }while(juego.getWin()==false and juego.getEstado()==true);

        if (juego.getWin()==true) vista.mostrarMensaje("Ganaste el juego, el total de puntos es:"+std::to_string(juego.getPuntaje()));
        else {vista.limpiarPantalla();vista.mostrarMensaje("Perdiste el juego, el total de puntos es:0");}

  //  std::cout << "\033[1;31m"; // Cambiar a rojo brillante
  //  std::cout << "\033[0m"; // Restablecer al color por defecto
   
    return 0;
}
