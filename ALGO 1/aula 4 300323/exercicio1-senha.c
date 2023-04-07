#include <stdio.h>
#include <math.h>

main()
{

int senha;

	printf ("digite a senha : ");
	scanf ("%d", & senha);
	if (senha == 1234)
	{
    printf ("\n acesso permitido");
	}
    	else
    	{
        	if (senha != 1234)
        	{
        	    printf("acesso negado");
        	}
        
   		}
}