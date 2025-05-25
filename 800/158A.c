#include<stdio.h>
int main (){

    int n,k,count=0;
    scanf("%d %d",&n,&k);

    int a[100];

 for(int i=1; i<=n;i++){
        
        scanf("%d",&a[i]);
        
    }

    for(int i=1; i<=n;i++){
        if(a[i]>0){
            if(a[k]<=a[i]){
              count++;
            }
        }
    }
    printf("%d\n",count);


    return 0;
}