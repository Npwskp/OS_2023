#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n = 5;
    /*int x = 20;
    int y = 20;
    int z = 20;*/
    for(int i=0;i<n;i++){
        static int *a;
        a = malloc(sizeof(int));
        printf("%d\n",&a);
    }

    for(int i=0;i<n;i++){
        int *a = malloc(sizeof(int));
        printf("%d\n",&a);
    }

}