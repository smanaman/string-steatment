#include<stdio.h>
#include<string.h>

int main(){
 char str[100];

 printf("Enter your string\n");
 gets(str);

for(int x=0; str[x] != '\0'; x++){
    if(str[x]>='A' && str[x]<='Z'){
        printf("%c",str[x]+32);
    }else{
       printf("%c",str[x]) ;
    }
}



}