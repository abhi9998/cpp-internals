#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p = malloc(sizeof(int)); // or int *p = (int *)malloc(sizeof(int)); they are same in cpp need to do this.
    *p = 10;
    printf("%d\n", *p);
}