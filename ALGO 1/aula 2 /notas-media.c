#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf ("digite a primeira nota ");
    scanf ("%f", &nota1);
    if (nota1 <0 || nota1 > 10)
    {
        printf ("\n nota 1 incorreta");
    }
    else
    {
    printf ("\n digite a segunda nota ");
    scanf ("%f", &nota2);
    if (nota2 <0 || nota2 > 10)
    {
        printf ("\n nota 2 incorreta");
    }
        else {
        media = (nota1+nota2)/2;
        if (media >= 0)
    {
        printf("\n sua nota final e: %2.f", media);
    }
        }
    }
    
}