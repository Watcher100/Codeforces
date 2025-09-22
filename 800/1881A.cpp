#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>> a >> b;
        string x, s;
        cin>> x >> s;

        int ans = -1;
        for(int i=0; i<6; i++){
            if(x.find(s) != string::npos){//if s is a substring of x
                ans = i;
                break;
            }
            x += x;
        }
        cout<< ans <<endl;
    
    }
}