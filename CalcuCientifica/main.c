#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a = 15, b = 5, VarSuma, VarResta, suma = 0, resta = 0, mult, div, cant = 0, i;
    char opcion;

    printf("\t\t\t\t\t\tCalculadora basica con switch case\n\n");//Cartel en pantalla
    printf("Menu de opciones:\n\na)Suma  \tb)Resta \t c)Multipiclacion \t d)Division \t x)salir\n\n");//Cartel en pantalla
    do
    {

        fflush(stdin); // Vaciamos el buffer del teclado
        printf("Ingrese opcion:\n");//Cartel en pantalla
        scanf("%c", &opcion);//Leo la opcion por teclado
        system("cls");//Ejecutamos el comando el DOS para borrar pantalla
        switch(opcion)
        {
             case 'a':
                  suma = 0;
                  printf("Que cantidad de numeros va a sumar?\n");
                  scanf("%i", &cant);
                  printf("Ingrese los numeros:\n");
                  for(i=0; i<cant ; i++)
                  {
                       scanf("%i", &VarSuma);
                       suma = suma + VarSuma;//suma += VarSuma;// es equivalente a suma = suma + VarSuma;
                  }
                  printf("La suma es: %i\n",suma);//Imprimo la suma
                  break;

             case 'b':
                  resta = a-b;//Realizo la resta
                  printf("La resta es: %i\n",resta);//Imprimo la resta
                  break;

             case 'c':
                  mult = a*b;//Realizo el producto
                  printf("La multiplicacion es: %i\n",mult);//Imprimo el producto
                  break;

             case  'd':
                  div = a/b;//Realizo la division
                  printf("La division es: %i\n",div);//Imprimo la division
                  break;

             case 'x':
                  printf("Opcion de salida\n");
                  break;

             default:
                  printf("La opcion es incorrecta.\n");
         }
    }while(opcion != 'x');
    return 0;
}
