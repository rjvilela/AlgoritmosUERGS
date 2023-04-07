#include <stdio.h>
#include <math.h>

int main()
{

float qtd_laranja, v_total;

	printf ("\n PROMO DO DIA!! comprando 12 ou mais unidades de LARANJA, o valor da unidade sai a 0,25 !! : ");
	printf ("\n digite a quantidade de laranjas desejada: ");
	scanf ("%f", & qtd_laranja);
	if (qtd_laranja < 12 )
	{
		v_total = qtd_laranja*0.30;
		printf ("\n voce comprou %.2f", qtd_laranja);
    	printf ("\n o valor total sera %.2f", v_total);
    	printf ("\n volte sempre, obrigado pela preferencia");
	}
    	else
    	{
        	if (qtd_laranja >= 12)
        	{
        	    v_total = qtd_laranja*0.25;
        	    printf ("\n voce comprou %.2f", qtd_laranja);
        	    printf ("\n o valor tottal sera %.2f", v_total);
        	    printf ("\n volte sempre, obrigado pela preferencia");
        	    
        	}
        
   		}
}