// Your code here...
#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a<='A' && a<='Z'){
        printf("Uppercase");
    }
    if else(a>='a' && a>='z'){
        printf("Lowercase");
    }
    else{
        printf("It is not a alphabet");
    }
    return 0;
}