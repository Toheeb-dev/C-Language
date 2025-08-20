#include <stdio.h>

int main(){
int i;

char char_arr[5]= {'a','b','c','d','e'};
int int_arr[5]={1,2,3,4,5};

int *int_pointer;
char *char_pointer;

int_pointer = int_arr;
char_pointer = char_arr;

for(i=0; i<5; i++)
{
printf("[char pointer] points to %p which contains the char '%c'\n", char_pointer, *char_pointer);
char_pointer +=1;

}
for(i=0; i<5; i++)
{ 
printf("[int pointer] points to %p which contains the int '%d'\n", int_pointer, *int_pointer);

int_pointer +=1;
}

}
