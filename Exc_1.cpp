/*Exe_01.Faça um algoritmo utilizando o minimo de bibliotecas possivel,
 que leia dois nomes completos, contendo apenas um nome e um sobrenome. 
 O programa deve exibir os nomes completosda seguinte forma:

a)Ordenados alfabeticamente pelo nome.

b)Ordenados alfabeticamente pelo sobrenome.
*/
#include <stdio.h>

//pula os valores dos vetores dos nomes caso eles forem iguais

int busca_posicao_letra_diferente(char a[], char b[]){
	
	for(int i=0;i<20;i++){
		if(a[i] != b[i]){
			return i;
		}
	}
	return -1;
}

//separa apenas o nome na string que contem o nome completo para comparar de forma correta

int separa_nome(char a[], char b[]){
	int i = 0;
	while(a[i] != ' '){
		b[i] = a[i];
		i++;
	}
}

//separa a string sobrenome da string nome

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

//compara a ordem alfabetica dos nomes/sobrenomes e printa os mesmos na ordem

int compara_ordem_alfabetica(char nome[], char nome2[], int letra, char retorno[], char retorno2[]){
	if(nome[letra]>nome2[letra]){
	 	printf("\n\t%s\n\t%s", retorno2, retorno);
	 }else{
	 	printf("\n\t%s\n\t%s", retorno, retorno2);
	 }
}

//transforma as strings em letras maiusculas para poder compara-las

int transforma_maiusculo(char nome[],char nome2[]){ 
	
	for(int i=0;i<50;i++){
		if(nome[i]>=97){
			nome[i]-=32;
		}
	}
		for(int i=0;i<50;i++){
		if(nome2[i]>=97){
			nome2[i]-=32;
		}
	}
}
	
int main(){

	//variaveis

	char nome[50] = "Guilherme Oechsler", nome2[50] = "Jose Matheus";
	char string[50], sobrenome[50], string2[50], sobrenome2[50];
	int letra;
	
	//inicio da codificação
	
	transforma_maiusculo(nome, nome2); //transforma todas as letras dos nomes em letras maiusculas

	separa_nome(nome, string); //separa apenas o nome da string "nome" para comparar
	separa_nome(nome2, string2); //separa apenas o nome da string "nome2" para comparar
	
	 printf("\nOrdem alfabetica pelo nome");
	 
	letra = busca_posicao_letra_diferente(nome, nome2); //pula os valores dos vetores dos nomes caso eles forem iguais


	 compara_ordem_alfabetica(string, string2, letra, nome, nome2); // compara a ordem alfabetica dos vetores string e string2 e printa

	 printf("\n\nOrdem alfabetica pelo sobrenome"); 
	 
	separa_sobrenome(string, sobrenome); //separa apenas o nome da string "sobrenome" para comparar
	separa_sobrenome(string2, sobrenome2); //separa apenas o nome da string "sobrenome2" para comparar
	
	letra = busca_posicao_letra_diferente(sobrenome, sobrenome2); //pula os valores dos vetores dos nomes caso eles forem iguais

	compara_ordem_alfabetica(sobrenome, sobrenome2, letra, nome, nome2);// compara a ordem alfabetica dos vetores sobrenome e sobrenome2 e printa
	
}
