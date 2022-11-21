#include <stdlib.h> 
#include <stdio.h>
#include <string.h> 
char* my_strdup(char* param_1)
{
    int length = strlen(param_1);
    char *a = malloc (length * sizeof(int));
    for(int i = 0; i <= length ; i++){
        a[i] = param_1[i];
    }
    
    return a;
}