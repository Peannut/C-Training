#include<stdio.h>
#include<string.h>
#include<ctype.h> 

void addition() {
    
    char word[10];
    int i;
    printf("Enter ur name here  : ");
    fgets(word, sizeof(word), stdin);
    
    for(i = 0; word[i] != '\0'; i++)
    {
        if( (i % 2) == 0)
            word[i] = toupper(word[i]);
        else
            word[i] = tolower(word[i]);
    }
    printf("\n%s", word);
    
}

int main(){
  addition();
  return 0;
}


 