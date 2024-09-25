#include<stdio.h>

int main() {
    int num;
    printf("inserisci il numero:");
    scanf("%d",&num);
    if(num>=0)
        printf("il numero %d e' positivo",num);
    else
        printf("il numero %d e' negativo",num);
    return 0;
}