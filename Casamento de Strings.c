#include <stdio.h>
#include <string.h>
#define MAX 50

int j,i,tam,tamanho,casamento,aux;
char palavra [MAX], gramatica [MAX];
	
	
	void casaPrefixo(){
		tamanho = strlen(palavra);	
		   for (i=0;i<tamanho;i++){
				if (gramatica[i] == palavra [i] ){
			 		aux=aux+1;					
				}else{
					aux=aux;
				}
			} 
			
			 	if (aux==tamanho){
			 		printf ("CASA");
				}else{
				 	
				 	printf ("NAO CASA");
				}
	}

	

	void casaSufixo(){
		tamanho = strlen(palavra);
		tam = strlen (gramatica);
		j=tamanho-1;				
			for (i=tam-1; i>=tamanho;i--){
				if (gramatica[i] == palavra [j] ){
			 		aux=aux+1;
					j--;					
				}else{
					aux=aux;
				}
			} 
			
			 	if (aux==tamanho){
			 		printf ("CASA");
				}else{	 	
				 	printf ("NAO CASA");
				}						
	}
	
	
	void casaSubpalavra (){
		tamanho = strlen(palavra);
		tam = strlen (gramatica);
		aux, j=0;				
			for (i=0;i<tam;i++){
				if (gramatica[i] == palavra [j] ){
			 		aux=aux+1;
					j++;					
				}else{
					aux=aux;
				}
			} 
			
			 	if (aux==tamanho){
			 		printf ("CASA");
				}else{	 	
				 	printf ("NAO CASA");
				}						
	}
	





int main (){
	
	printf ("Informe uma PALAVRA: \n");
	scanf ("%s", &gramatica);
	printf ("\n");
	
	printf ("Informe o CASAMENTO que deseja: \n");
	scanf ("%s", &palavra);
	printf ("\n");	  
	
	printf ("DIGITE: \n1-prefixo \n2-subpalavra \n3-sufixo\n ");
	scanf ("%i", &casamento);
	printf ("\n");
	
		switch (casamento){
			case 1:
				printf("Prefixo---> ");
				casaPrefixo();	
			break;
				case 2:
					printf("Subpalavra---> ");	
					casaSubpalavra();
			break;
				case 3:
					printf("Sufixo---> ");
					casaSufixo();	
			break;
	}

	

}

