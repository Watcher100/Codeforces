#include<stdio.h>
#include<string.h>
int main (){
    
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        char ch[101];
         scanf("%s",&ch[i]);
         int s=strlen(ch);
         if(s>10)
         {
             printf("%c%d%c\n", ch[0], s - 2, ch[s - 1]);
         }
         else {
            printf("%s\n", ch);
        }

    }

    return 0;
}