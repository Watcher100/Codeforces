#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int num = stoi(s);
       int root = sqrt(num);

        if(root * root == num){
           int c= root/2;
           if(root%2==0){
            cout<<c<<" "<<c<<endl;
           }else{
                cout<<c<<" "<<c+1<<endl;
           }
           
        }else{
            cout<<"-1"<<endl;
        }
    }
}