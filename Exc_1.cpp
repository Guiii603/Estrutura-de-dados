/*Exe_01.Faça umalgoritmo utilizando o minimo de bibliotecas possivel,
 que leia dois nomes completos, contendoapenas um nomee um sobrenome. 
 O programa deve exibir os nomes completosda seguinte forma:

a)Ordenados alfabeticamente pelo nome.

b)Ordenados alfabeticamente pelo sobrenome.
*/
#include <stdio.h>

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

char separa_sobrenome(char a[], char b[]){
	
	int i=-1;
	int aux = 0;
	
	 do{
	 	i++;
	 }while(a[i] != ' ' );
	
	do{
	i++;
	b[aux] = a[i];
	aux++;		 
	 } while(a[i] != ' ' && a[i] != '\0');
}

int compara_ordem_alfabetica(){
	
}
	
int main(){

	char nome[50] = "guilherme oechsler", nome2[50] = "keyla rubia";
	char string[50], sobrenome[50], string2[50], sobrenome2[50];
	int letra, letra2, aux, aux2;
	
	separa_nome(nome, string);
	separa_nome(nome2, string2);
	
	 printf("Ordem alfabetica pelo nome");
	 
	letra = busca_posicao_letra_diferente(nome, nome2);
	
	 if(string[letra]>string2[letra]){
	 	printf("\n\t%s\n\t%s", nome2, nome);
	 }else{
	 	printf("\n\t%s\n\t%s", nome, nome2);
	 }

	 printf("\n\nOrdem alfabetica pelo sobrenome"); 
	 
	separa_sobrenome(string, sobrenome);
	separa_sobrenome(string2, sobrenome2);
	
	letra2 = busca_posicao_letra_diferente(sobrenome, sobrenome2);

	 if(sobrenome[letra2]>sobrenome2[letra2]){
	 	printf("\n\t%s\n\t%s", nome2, nome);
	 }else{
	 	printf("\n\t%s\n\t%s", nome, nome2);
	 }
	 
}
