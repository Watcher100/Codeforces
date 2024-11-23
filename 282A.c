#include<stdio.h>
int main (){

    int n;
    scanf("%d",&n);

    int count=0;

    while (n--)
    {
        char s[100];
        scanf("%s",&s);

        if(s[0]=='+'){
            count++;
        }else if(s[0]=='-'){
            count--;
        }else if(s[2]=='-'){
            count--;
        }else if(s[2]=='+'){
            count++;
        }
    }
    printf("%d",count);
    


    return 0;
}