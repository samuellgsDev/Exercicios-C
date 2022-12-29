/*Dado um vetor A de inteiros com tamanho informado pelo usuário, escreva
um programa em C que pesquise dentro do vetor por ocorrência de elementos
repetidos em vizinhança. Os elementos do vetor A e o padrão de repetição deve
ser informado pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int i, j, n, k, cont = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int *v = malloc(n * sizeof(int));
    for(i = 0; i < n; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("Digite o tamanho do padrao: ");
    scanf("%d", &k);
    int *p = malloc(k * sizeof(int));
    for(i = 0; i < k; i++){
        printf("Digite o %d numero do padrao: ", i+1);
        scanf("%d", &p[i]);
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < k; j++){
            if(v[i] == p[j]){
                cont++;
            }
        }
    }
    if(cont == k){
        printf("O padrao esta contido no vetor.");
    }
    else{
        printf("O padrao nao esta contido no vetor.");
    }
    return 0;
}