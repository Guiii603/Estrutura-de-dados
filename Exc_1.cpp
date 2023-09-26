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

int comparacao_de_letras(char a[], char b[], int *i){
	*i = -1;
	do{
	*i++;
	}while(a[*i] == b[*i]);	
} 

	void separa_nome(char a[]) {
    int i = 0;
    while(a[i] != ' '){
        printf("%c", a[i]);
        i++;
    }
}

int valor_posicao_nome(char a[], char *s[]){
	int j = 0;
	int i = 0;
	do{
		*s[j+1] = a[i];
		i++;
		
	}while(a[i] != ' ' && i < 20);

	
}


int busca_posicao_letra_diferente(char a[], char b[]){
	
	for(int i=0;i<20;i++){
		if(a[i] != b[i]){
			return i;
		}
	}
	return -1;
}
	

int main (){

	char nome[20] = "Guilherme Oechsler";
	char nome2[20] = "Keyla Rubia"; 
	char string[20];
	int letra;
	int aux, aux2;

	 printf("Ordem alfabetica pelo nome");
	 letra = -1;
	do{
	letra++;
	}while(nome[letra] == nome2[letra]);
	 if(nome[letra]>nome2[letra]){
	 	printf("\n\t%s\n\t%s", nome2, nome);
	 }else{
	 	printf("\n\t%s\n\t%s", nome, nome2);
	 }

	split(nome, &aux);
	split(nome2, &aux2);

	 printf("\n\nOrdem alfabetica pelo sobrenome");
	 
	 
	do{
	aux++;
	aux2++;
	}while(nome[aux] == nome2[aux2]);
	 
	 if(nome[aux]>nome2[aux2]){
	 	printf("\n\t%s\n\t%s", nome2, nome);
	 }else{
	 	printf("\n\t%s\n\t%s", nome, nome2);
	 }
	 
	 
}
