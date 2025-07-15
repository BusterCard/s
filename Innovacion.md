# Innovación en el movimiento del Avatar

## Descripción

El **Avatar Innovador** implementa un movimiento en zig-zag: en cada paso alterna entre moverse una casilla hacia arriba (`w`) y una hacia la derecha (`d`). Esto permite recorrer el tablero de una forma distinta, explorando más eficientemente ciertas áreas y dificultando que caiga en abismos alineados vertical u horizontalmente.

## Diseño

- Se usa una variable interna para alternar el sentido del movimiento.
- El método de movimiento se sobreescribe en la lógica correspondiente.
- El patrón se puede visualizar así, desde una posición inicial (`X`):

```
X →   →   →
↓        ↓
→   →   →
↓        ↓
→   →   →
```

## Gráfico

```plaintext
     d   d   d
X →  →   →   →
|    |   |   |
w    w   w   w
↓    ↓   ↓   ↓
```
