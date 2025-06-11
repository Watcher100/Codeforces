#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s= to_string(n);//convert int to string
        int m=s.size();

        int cal=(n%10-1)*10;

        int c;
        if(m==1){
            c=1;
        }else if(m==2){
            c=3;
        }else if(m==3){
            c=6;
        }else if(m==4){
            c=10;
        }
        cout<<cal+c<<endl;
    }
    
}