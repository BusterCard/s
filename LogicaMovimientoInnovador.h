#ifndef LOGICAMOVIMIENTOINNOVADOR_H
#define LOGICAMOVIMIENTOINNOVADOR_H

#include "LogicaDeMovimiento.h"

class LogicaMovimientoInnovador : public LogicaDeMovimiento {
private:
    bool zigzag = false; // Alterna entre vertical y horizontal
public:
    void mover(IPersonaje& personaje, char direccion) override;
};

#endif // LOGICAMOVIMIENTOINNOVADOR_H
