/*
 * Este programa consiste en
 * sacar el promedio de cualquier numero.
 *
 * Autora: Yasmin Alvarado Lee
 * Correo: yazminalvlee@gmail.com
 * Fecha: 7 de septiembre de 2018
 *
 */
#include <stdio.h>

int main() {

    //Variables
    double suma = 0;
    int num;
    double l = 0;
    double pr;
    int e;


    //Aqui le pedimos al usuario poner cualquier numero
    printf("Dame un numero y despues pon 0 :\n");

    //La operacion para sacar el promedio de el numero
    //que dio el usuario
    do{
         scanf("%i", &num);
         suma = suma + num;
         l++;

     } while (num!=0);

     e = (int) (l - 1);
     pr = suma / e;


     //Aqui le damos al usuario los numeros que
     //fueron usados y su promedio
     printf("Los numeros que fueron usados: %i\n",e);
     printf("El promedio es: %lf", pr);

    return 0;
}