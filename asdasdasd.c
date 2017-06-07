#include <stdio.h>
/*
 Escreve um algoritmo para ler uma quantidade indeterminada de valores inteiros. Para cada valor

fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. O algoritmo

será encerrado imediatamente após a leitura de um valor NULO ou NEGATIVO.
 */

int main()
{	
	int n;
	n=1;
	while(n>0 && scanf("%d",&n) == 1)
	{
		if(n>0){
				if(n%2==0)
				  {
					  printf("Valor PAR\n");
			      }
			  
				  else{
					if(n%2!=0)
					  {	
						printf("Valor IMPAR\n"); 
					  }else
						   {
							   n = 0;
						   } 		
				}
			}
				 
	
	
	
	}
	
	return 0;
}


