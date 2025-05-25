#include<stdio.h>
#include<stdlib.h>
int main (){

    int arr[5][5];
    int r,c;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                r=abs(2-i);
                c=abs(2-j);
                printf("%d\n",r+c);
            }
            
        }

    }

    
    return 0;
}