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

int busca_posicao_letra_diferente(char a[], char b[]){
	
	for(int i=0;i<20;i++){
		if(a[i] != b[i]){
			return i;
		}
	}
	return -1;
}

int separa_nome(char a[], char b[]){
	int i = 0;
	while(a[i] != ' '){
		b[i] = a[i];
		i++;
	}
}

int separa_sobrenome(char a[], char b[]){
	
	int aux, i=0;
	
	split(a, &aux);
	
	
	while(a[aux] != ' '){
		b[i] = a[aux];
		aux++;
		i++;
	}
}
	
int main (){

	char nome[20] = "guilherme oechsler";
	char nome2[20] = "keyla rubia"; 
	char string[20];
	char string2[20];
	int letra;
	int aux, aux2;
	
	
	separa_nome(nome, string);
	separa_nome(nome2, string2);
	
	 printf("Ordem alfabetica pelo nome");
	 
	letra = busca_posicao_letra_diferente(nome, nome2);
	
	 if(string[letra]>string2[letra]){
	 	printf("\n\t%s\n\t%s", nome2, nome);
	 }else{
	 	printf("\n\t%s\n\t%s", nome, nome2);
	 }

//	split(nome, &aux);
//	split(nome2, &aux2);
//
//	 printf("\n\nOrdem alfabetica pelo sobrenome"); 
//	 
//	do{
//	aux++;
//	aux2++;
//	}while(nome[aux] == nome2[aux2]);
//	 
//	 if(nome[aux]>nome2[aux2]){
//	 	printf("\n\t%s\n\t%s", nome2, nome);
//	 }else{
//	 	printf("\n\t%s\n\t%s", nome, nome2);
//	 }
	 
}
