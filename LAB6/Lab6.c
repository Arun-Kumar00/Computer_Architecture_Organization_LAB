#include <stdio.h>
int main(){

int var = 100;

int *ptr = &var;

int arr[3]={10,20,30};

printf("value of var: %d\n", var);

printf("Address of var: %p\n",&var);

printf("value stored in pointer: %p\n", (void*)ptr);

var = 200;

*ptr = 300;

return 0;}
