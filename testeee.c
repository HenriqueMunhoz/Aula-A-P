/*
Escreva um programa em C para ler uma quantidade indeterminada de temperaturas em graus Celsius.

Para cada temperatura fornecida escrever a correspondente em graus Fahrenheit. Após a impressão de

cada conversão exibir a pergunta "Nova temperatura (1.sim 2.não)?". Se o usuário responder com o

valor 2 o programa deve ser encerrado, caso contrário deverá ler outra temperatura em Celsius.
 */

#include <stdio.h>

int main()
{
	int n,s;
	float t,calculo;
	
	n = 1;
	t=0;
	
	while(n==1 && scanf("%f",&t) == 1)
		{
			calculo = (t*1.8)+32;
			printf("%.2f\n", calculo);
			printf("Nova Temperatura?\n");
			printf("1.SIM 2.NÃO\n");
			scanf("%d",&s);
			if(s==2)
				{
					n = 2;
				}
				else
					{
						n = 1;
					}
			
		}
	return 0;
}

