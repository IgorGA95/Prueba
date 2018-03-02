//Programa que Obtenga las Raices cuadraticas mediante la formula general
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define D 2
#define R 4

void Discr(float a,float b,float c);

//igor gómez

int main()
{
	float a,b,c;
	printf ("\t::CALCULO DE RAICES CUADRATICAS::\n");
	printf ("\nDada La Funcion Cuadratica ax^2+bx+c\n\n");
	printf ("\nIngrese el Coeficiente Cuadratico a: ");
	scanf ("%f",&a);
	printf ("\nIngrese el Coeficiente Lineal b: ");
	scanf ("%f",&b);
	printf ("\nIngrese la Constante c: ");
	scanf ("%f",&c);
	if (a!=0)
	   {
		   Discr (a,b,c);
	   }
	 else  
	   {
	   	printf ("\nERROR EL COEFICIENTE CUADRATICO a DEBE SER DIFERENTE DE CERO!!!\n");
	   }
	printf ("\n\n");
	system ("pause");
}


void Discr(float a,float b,float c)
{
    float Y1,Y2,Y3,Y4,Dis,Disc;
	Dis=pow(b,2)-(R*a*c);
    if (Dis<0)
       {
        printf ("\nLA FORMULA TIENE RAICES IMAGINARIAS:");
        Disc=Dis*(-1);
        Y1=(-b/(a*D));
        Y2=((sqrt(Disc))/(a*D));
        printf ("\nRaiz1= %f + %f %c",Y1,Y2,'i');
        Y3=(-b/(a*D));
        Y4=((sqrt(Disc))/(a*D));
        printf ("\nRaiz2= %f - %f %c\n",Y3,Y4,'i');      
	   }
     else
       {
       	printf ("\nLAS RAICES REALES SON:");
       	Y1=((-b)+sqrt(Dis))/(a*D);
	   	Y2=((-b)-sqrt(Dis))/(a*D);
	   	printf ("\nRAIZ1= %f",Y1);
	   	printf ("\nRAIZ2= %f",Y2);
	   }
}
