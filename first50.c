#include <stdio.h>

int p1(){
    int num, maior = 0;

    printf("Digite uma sequencia de inteiros terminada em 0:\n");
    do {
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
        }
    } while (num != 0);
    printf("O numero maior e: %d\n",maior);

    return 0;
}

int p2(){
    int input, soma_input = 0, contador = 0;
    float media;
    printf("Digite uma sequencia de inteiros terminada em 0: \n");
    do{
        scanf("%d", &input);
        if(input != 0){
            soma_input += input;
            contador ++;  
        }
    } while (input != 0);
    media = (float)soma_input/contador;
    printf("A media da sequencia e: %f", media);
}

int p3(){

    int num, maior = 0, segundo_maior = 0;
    
    printf("Digite uma sequencia de numeros inteiros terminada em 0:\n");
    
    do {
        scanf("%d", &num);
        if (num > maior) {
            segundo_maior = maior;
            maior = num;
        } else if (num != maior && num > segundo_maior) {
            segundo_maior = num;
        }
    } while (num != 0);
    
    printf("O segundo maior elemento da sequencia e: %d\n", segundo_maior);
    
    return 0;
}