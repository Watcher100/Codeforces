#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;

    int c=max(a,b);
    int d=min(a,b);

    cout<<d<<endl;
    cout<<(c-d)/2<<endl;
}