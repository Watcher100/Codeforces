#include<bits/stdc++.h> // use for compi.
using namespace std;

int main (){

    string str;
    cin>>str;


    if(str[0]>=97 && str[0]<=122){
        str[0]=(int)str[0]-32;
        cout<<str<<endl;
    }else{
        cout<<str<<endl;
    }


    return 0;
}