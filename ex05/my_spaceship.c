#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
int lengthf (char* str2){
    int count = 0;
    for(int k=0; str2[k] != '\0'; k++){
        count++;
    }
    return count;
}

char* my_spaceship(char* str)
{
    char rotation[4][5]={"up", "right", "down", "left"};
    int index = 0;
    int x = 0;
    int y = 0;
    int i=0;
    int length = lengthf(str);
    char* output = (char*)malloc(sizeof(char)*100);
    while(i<length){
        if(str[i] == 'R'){
            index++;
        } else if (str[i] == 'L') {
            index--;
        } else {
            if(index == 0){
                y--;
            } else if (index == 1) {
                x++;
            } else if (index == 2) {
                y++;
            } else {
                x--;
            }
        }
        while (index<0) {
            index += 4;
        }
	    
	i++;
	}
	sprintf(output, "{x: %d, y: %d, direction: '%s'}", x, y, rotation[index%4]);
	return output;
}