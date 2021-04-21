#include<stdio.h>
#include<string.h>

void toUpperCase(char arr[]) {  
    int i,max;
    for(i = 0; arr[i] != '\0'; i++)
    {
    max = ((i % 2) == 0 && arr[i]>='a' && arr[i]<='z') ? (arr[i] = arr[i]-32):(i % 2 != 0 && arr[i]>='A' && arr[i]<='Z')?(arr[i] = arr[i]+32):0;
    }
    printf("%s\n", arr);    
}

int main(){
  char t[] = "PerPlexS";
  toUpperCase(t);
  return 0;
}

