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
        // Crear el avatar CPU en una posición inicial
        AvatarCPU avatarCPU;  //Avatar Cpu
        avatarCPU.setPosicionFila(2);
        avatarCPU.setPosicionColumna(2);
        // Crear la lógica de movimiento aleatorio
        LogicaMovimientoAleatorio logicaAleatoria;
        // Crear el juego
        Juego juego(&tablero, &avatarCPU, &logicaAleatoria, true);
        // Crear el avatar innovador en una posición inicial

        AvatarInnovador avatarInnovador; //Avatar Innovador
        avatarInnovador.setPosicionFila(2);
        avatarInnovador.setPosicionColumna(2);
        // Crear la lógica de movimiento innovadora
        LogicaMovimientoInnovador logicaInnovadora;
        // Crear el juego
        Juego juego(&tablero, &avatarInnovador, &logicaInnovadora, true);
       
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
