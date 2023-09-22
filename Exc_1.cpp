/*Exe_01.Faça umalgoritmo que leia dois nomes completos, contendoapenas um nomee um sobrenome. O programa deve exibir os nomes completosda seguinte forma:

a)Ordenados alfabeticamente pelo nome.

b)Ordenados alfabeticamente pelo sobrenome.
*/
#include <stdio.h>

int split(char a[], int *aux){
	int i;
	*aux = 1;
	 for(i=0;i<20;i++){
	if(a[i] == ' '){
	*aux=*aux+i;
		}
	}
}

int comparacao_de_letras(char a[], char b[], int i){
	i = -1;
	do{
	i++;
	}while(a[i] == b[i]);		
	
} 


int main (){
	
	char nome[20] = "Guilherme Oechsler";
	char nome2[20] = "jose Mateus"; 
	int letra;
	int aux, aux2;
	
	 printf("Ordem alfabetica pelo nome");
	 if(nome[letra]>nome2[letra]){
	 	printf("\n\t%s\n\t%s", nome2, nome);
	 }else{
	 	printf("\n\t%s\n\t%s", nome, nome2);
	 }

	split(nome, &aux);
	split(nome2, &aux2);

	 printf("\n\nOrdem alfabetica pelo sobrenome");
	 if(nome[aux]>nome2[aux2]){
	 	printf("\n\t%s\n\t%s", nome2, nome);
	 }else{
	 	printf("\n\t%s\n\t%s", nome, nome2);
	 }
	 
	 
}
