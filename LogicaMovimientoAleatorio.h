#ifndef LOGICAMOVIMIENTOALEATORIO_H
#define LOGICAMOVIMIENTOALEATORIO_H

#include "LogicaDeMovimiento.h"
#include <cstdlib>
#include <ctime>

class LogicaMovimientoAleatorio : public LogicaDeMovimiento {
public:
    void mover(IPersonaje& personaje, char direccion) override;
};

#endif // LOGICAMOVIMIENTOALEATORIO_H
