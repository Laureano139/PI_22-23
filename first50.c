#include <stdio.h>
#include <string.h>

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

int bitsUm(unsigned int n) {
    int count = 0;
    
    while (n != 0) {
        if (n % 2 == 1) {
            count++;
        }
        n = n / 2;
    }
    
    return count;
}

int trailingZ(unsigned int n) {
    int count = 0;
    
    while ((n & 1) == 0 && n != 0) {
        count++;
        n = n >> 1;
    }
    
    return count;
}

int qDig(unsigned int n) {
    int count = 1;
    
    while (n >= 10) {
        count++;
        n /= 10;
    }
    
    return count;
}

char *mystrcat (char s1[], char s2[]){
    int i, len;
    for(i = 0, len = strlen(s1); s2[i] != '\0'; i++, len++){
        s1[len] = s2[i];
    }
    s1[len] = '\0';
    return s1;
}

/*
Percorrer string até '\0' -> dest[i] = source[i]
*/
char *mystrcpy (char *dest, char source[]){
    int i;
    for(i = 0; source[i] != '\0'; i++){
        dest[i] = source[i];
    }
    dest[i] = '\0';
    return dest;
}

/*
0 se s1 = s2
-1 se s1 < s2
1 se s1 > s2    
*/
int mystrcmp (char s1[], char s2[]){

    int i;
    for(i = 0; s1[i]!='\0'; i++){
        if(s1[i]>s2[i]) return 1;
        else if(s1[i]<s2[i]) return -1;
    }

    if(s2[i]) return -1;

    return 0;
}

char *mystrstr (char s1[], char s2[]){

    int i, j, c;
    
    if(s2[0] == '\0') return s1;
    
    for(i = 0; s1[i]!='\0';i++){

        for(j = 0, c=i; s2[j]!='\0'; j++, c++) if(s1[c]!=s2[j]) break;

        if(s2[j] == '\0') return s1+i;
    }
    return NULL;
}

void mystrrev (char s[]){
    int i, len;
    char aux;

    for(i = 0, len = strlen(s)-1; i < len; i++, len--){
        aux = s[i];
        s[i] = s[len];
        s[len] = aux;
    }
}

void strnoV (char s[]){

    int i = 0;
    for(i; s[i]!='\0'; i++){
        if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'||
           s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U'){
            int j;
            for(j = i; s[j]!='\0'; j++) s[j] = s[j+1];
            i--;
        }
    }
}



