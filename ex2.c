/*Escreva um programa em C que leia um vetor de inteiros de tamanho
informado pelo usuário e imprima os números lidos somente se o último número
for maior que a soma dos números anteriores. OBS: Alocar o vetor
dinamicamente.*/
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int i, n, soma = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int *v = malloc(n * sizeof(int));
    for(i = 0; i < n; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &v[i]);
    }
    for(i = 0; i < n-1; i++){
        soma += v[i];
    }
    if(v[n-1] > soma){
        printf("O ultimo numero e maior que a soma dos numeros anteriores. Portanto os numeros sao: \n");
        for(i = 0; i < n; i++){
            printf("[%d] ", v[i]);
        }
        printf("\n");

    }
    else{
        printf("O ultimo numero nao e maior que a soma dos numeros anteriores.");
    }
    return 0;
}