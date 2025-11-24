#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;

        bool ans = false;

        long long n_a = 2*b-c;
        if(n_a/a > 0 && n_a%a == 0){
            ans = true;
        }

        long long n_b = (a+c)/2;
        if(n_b / b>0 && n_b%b==0 && (c-a)%2==0){
            ans = true;
        }

        long long n_c= 2*b-a;
        if(n_c/c>0 && n_c%c==0){
            ans = true;
        }

        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}