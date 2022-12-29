/*Escreva um programa em C que receba uma string informada pelo usuário.
Crie uma função que receba essa string como parâmetro e mostre o conteúdo
da string de forma invertida. OBS: Alocar a string dinamicamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inverter(char texto[]){
    int i, f, tam = strlen(texto);
    char *novo = malloc((tam +1) * sizeof(char));
    f = tam- 1;
    for(i = 0; i < tam; i++){
        novo[i] = texto[f];
        f--;
    }
    novo[i] = '\0';
    return novo;
}

int main(){
    char x;
    char *p;
    printf("Digite uma frase: ");
    scanf("%[^\n]s", &x);
    p = inverter(&x);
    printf("%s", p);
    return 0;
}
