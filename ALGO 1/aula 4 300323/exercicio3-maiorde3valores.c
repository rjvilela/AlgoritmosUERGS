#include <stdio.h>

int main()
{
	float v1, v2, v3;
		printf("digite o primeiro valor : ");
		scanf("%f",& v1);
		
		printf("digite o segundo valor : ");
		scanf("%f",& v2);
		
		printf("digite o terceiro valor : ");
		scanf("%f",& v3);
		
		if (v1>v2 || v1>v3)
		{
				printf ("o maior valor e %f", v1);
		}
		else
		{
			if(v2>v1 || v2>v3)
			{
				printf ("o maior valor e %f", v2);
			}
			else
			{
				if (v3>v1 || v3>v2)
				{
					printf ("o maior valor e %f", v3);
				}
				else
				{
					printf ("os valores sao iguais");
				}
			}
		}
}