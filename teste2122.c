#include <stdio.h> 

/*

Pergunta 1

Implemente a função int nesimo(int a[], int N, int i) que dado um array de
tamanho N > 0 e um inteiro 0 < i <= N devolve o i-ésimo menor elemento do array.
Por exemplo, se i == 1 a função deve retornar o menor elemento do array.

*/

int nesimo(int a[], int N, int i){
    int menor = 99999, segundo_menor = 99999, j;
    for(j=0; j<=N; j++){
        if(a[j]<menor){
            segundo_menor = menor;
            menor = a[j];
        }
        else if(a[j] != menor && a[j]<segundo_menor){
            segundo_menor = a[j];
        }
    }
    if (i == 1) return menor;
    else return segundo_menor;
}

int main(){
    nesimo([1,4,6,1],4,1)
}

