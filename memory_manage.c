#include<stdio.h>
#include<stdlib.h>

int recur(int i){
    if(i == 0){
        return 0;
    }
    int tmp = 10;
    printf("recursive call stack no.%d: %d\n",(4-i),&tmp);
    return recur(i-1);
}

void recur_overflow(){
    recur_overflow();
}

//Global variables
int x = 20;
int y = 20;
int z = 20;

int main(){
    printf("Recursive function call stack\n");
    recur(3);
    printf("\n");

    printf("Global variables\n");
    printf("global variables no.1: %d\n",&x);
    printf("global variables no.2: %d\n",&y);
    printf("global variables no.3: %d\n",&z);
    printf("\n");

    printf("Malloc\n");
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    printf("malloc no.1: %d\n",a);
    printf("malloc no.2: %d\n",b);
    printf("malloc no.3: %d\n",c);
    printf("\n");

    recur_overflow();

    return 0;
}