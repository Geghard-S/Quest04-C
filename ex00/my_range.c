#include <stdlib.h> 
#include <stdio.h>
int* my_range(int param_1, int param_2)
{
    int length = param_2 - param_1;
    int *a = malloc (length * sizeof(int));
    if (param_1 > param_2){
        a = NULL;
    }else{
        int n = param_1;
        int counter = 0;
        for(int i = n; i <= length ; i++){
        a[counter] = i;
        counter++;
        }
    }
    return a;
}