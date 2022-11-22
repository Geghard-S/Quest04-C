#include <stdlib.h>
#include <string.h>
#include <sys/cdefs.h>
#include <stdio.h>
#include <assert.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
int length (char* str2){
    int count = 0;
    for(int k=0; str2[k] != '\0'; k++){
        count++;
    }
    return count;
}

char* my_join(string_array* arr, char* ch)
{
    char newArr[100]={""};
    char* string = (char*)malloc(sizeof(char)*100);
    if(arr->size == 0){
        string = NULL;
    }else{
        for (int i = 0 ; i < arr->size; i++){
            for(int j = 0 ; j < length(arr->array[i]) ; j++){
                strcpy (newArr,arr->array[i]);
                if ( i == arr->size -1  && j == length(arr->array[i]) -1){
                    strcat(newArr, "");
                }
                else{
                    strcat(newArr, ch);
                } 
            }
        strcat(string, newArr);
        }
    }
    //printf("%s ", string);
    return string;
}
