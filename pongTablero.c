#include <stdio.h>

struct Paleta
{
    int x;
    int y;
    int altura;
};

void construirTablero(char tablero[10][30]);
void mostrarTablero(char tablero[10][30]);
void dibujarPaleta(char tablero[10][30], struct Paleta paleta);

int main()
{
    char tablero[10][30];

    struct Paleta jugador;
    struct Paleta pc;

    jugador.x = 2;
    jugador.y = 4;
    jugador.altura = 3;

    pc.x = 27;
    pc.y = 4;
    pc.altura = 3;

    construirTablero(tablero);

    dibujarPaleta(tablero, jugador);
    dibujarPaleta(tablero, pc);

    mostrarTablero(tablero);

    return 0;
}

void construirTablero(char tablero[10][30])
{
    int fila;
    int columna;

    for (fila = 0; fila < 10; fila++)
    {
        for (columna = 0; columna < 30; columna++)
        {
            if (fila == 0 || fila == 9)
            {
                tablero[fila][columna] = '-';
            }
            else if (columna == 0 || columna == 29)
            {
                tablero[fila][columna] = '|';
            }
            else
            {
                tablero[fila][columna] = ' ';
            }
        }
    }
}

void dibujarPaleta(char tablero[10][30], struct Paleta paleta)
{
    int fila;

    for (fila = paleta.y; fila < paleta.y + paleta.altura; fila++)
    {
        tablero[fila][paleta.x] = '|';
                                  

    }
}

void mostrarTablero(char tablero[10][30])
{
    int fila;
    int columna;

    for (fila = 0; fila < 10; fila++)
    {
        for (columna = 0; columna < 30; columna++)
        {
            printf("%c", tablero[fila][columna]);
        }

        printf("\n");
    }
}