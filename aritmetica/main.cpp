#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Code write by Leonel

    int num1;
    int num2;
    int resultado;
    int resultado2;
    int op;
    char operador;

    srand (time(NULL)); //initialize random seed:

    num1 = rand() % 10 + 1; //generate a number between 0 to 99
    num2 = rand() % 10 + 1; //generate a number between 0 to 99
    op = rand() % 3; // 0 es suma, 1 es resta, 2 es multiplicacion, 3 es division

    switch (op)
    {
      case 0:
         operador = '+';
         resultado = num1 + num2;
         break;
      case 1:
         operador = '-';
         resultado = num1 - num2;
         break;
      case 2:
          resultado = num1 * num2;
         operador = '*';
         break;
    }

    printf("¿Cuál es el resultado de la operación? \n %d %c %d =", num1, operador, num2);

    scanf(" %d", &resultado2);

    if (resultado2 == resultado){
        printf ("CORRECTO :-)");
    }else{
        printf ("INCORRECTO :-(");
    }


    return 0;

}
