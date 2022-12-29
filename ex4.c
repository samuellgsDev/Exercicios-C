/*Escreva um programa em C que receba uma frase de tamanho 100 via teclado
e crie uma função para imprimir em linhas diferentes as palavras que compõem
a frase.*/
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

void imprimir(char texto[]){
    int tamTexto = strlen(texto)-1;
    for (int i = 0; i < tamTexto; i++){
        if(texto[i] != ' '){
            printf("%c", texto[i]);
        }
        else{
            printf("\n");
        }
    }

}

int main(void){
    char texto[TAM];
    printf("Digite uma frase: ");
    fgets(texto, TAM, stdin);
    imprimir(texto);

    return 0;
}