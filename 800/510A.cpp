#include<bits/stdc++.h>
using namespace std;
int main (){
    
    int r,c;
    cin>>r>>c;

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i%4==0){
                if(j==1){
                    cout<<"#";
                }else{
                    cout<<".";
                }
            }else if(i%4==2){
                if(j==c){
                    cout<<"#";
                }else{
                    cout<<".";
                }
            }else{
                cout<<"#";
            }
        }
        cout<<endl;
    }

    // for(int i=1; i<=r; i++){
    //     for(int j=1; j<=c; j++){
    //         if(i%2==0){
    //             if(i%4==0){
    //                 if(j==1){
    //                 cout<<"#";
    //                 }else{
    //                 cout<<".";
    //                 }
    //             }else{
    //                 if(j==c){
    //                     cout<<"#";
    //                 }else{
    //                     cout<<".";
    //                 }
    //             }
                
    //         }else{
    //             cout<<"#";
    //         }
    //     }
    //     cout<<endl;
    // }

}