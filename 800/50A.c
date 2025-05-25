#include<stdio.h>
int main (){

    int m,n,b;
    scanf("%d %d",&m,&n);

    if(1<=m<=n<=16){
        int a= m*n;
        b=a/2;
    }
    printf("%d",b);



    return 0;
}