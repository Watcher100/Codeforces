// // #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main (){

    string s;
    int count=0;
    cin>>s;

    sort(s.begin(),s.end());

        for(int i=0; i<s.size();i++){
            if(s[i]!=s[i+1]){
                count++;
            }
        }
        if(count%2!=0){
            cout<<"IGNORE HIM!\n";
        }else{
            cout<<"CHAT WITH HER!"<<endl;
        }



    return 0;
}


