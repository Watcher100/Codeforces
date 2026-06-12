#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int ax,ay,bx,by;
        cin>>ax>>ay>>bx>>by;
        
        if(ay>by){
            cout<<-1<<endl;
            continue;
        }else{
            int moves = by-ay;
            ax+=moves;
            if(ax<bx){
                cout<<-1<<endl;
                continue;
            }else{
                moves+=(ax-bx);
                cout<<moves<<endl;
            }
        }
        
    }
  
}