/*Exe_01.Faça umalgoritmo que leia dois nomes completos, contendoapenas um nomee um sobrenome. O programa deve exibir os nomes completosda seguinte forma:

a)Ordenados alfabeticamente pelo nome.

b)Ordenados alfabeticamente pelo sobrenome.
*/
#include <stdio.h>

int main (){
	
	char nome[20] = "Guilherme Oechsler";
	char nome2[20] = "Jose Mateus"; 
	int first = 0;
	int i, j;
	int aux = 1, aux2 = 1;
	
	 printf("Ordem alfabetica pelo nome");
	 if(nome[first]>nome2[first]){
	 	printf("\n\t%s\n\t%s", nome2, nome);
	 }else{
	 	printf("\n\t%s\n\t%s", nome, nome2);
	 }
	 for(i=0;i<20;i++){
	if(nome[i] == ' '){
	aux=aux+i;
}
	}	
		 for(j=0;j<20;j++){
	 
	if(nome2[j] == ' '){
		aux2= aux2+j;
}
	}
	 printf("\n\nOrdem alfabetica pelo sobrenome");
	 if(nome[aux]>nome2[aux2]){
	 	printf("\n\t%s\n\t%s", nome2, nome);
	 }else{
	 	printf("\n\t%s\n\t%s", nome, nome2);
	 }
}
