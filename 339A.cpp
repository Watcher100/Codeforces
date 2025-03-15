#include<bits/stdc++.h>
using namespace std;

int main (){

    string s;
    cin>>s;

    int n=s.size();

    //using bubble sort
    for(int i=0; i<n-1; i+=2){
        for(int j=0; j<n-1-i; j+=2){
            if(s[j] > s[j+2]){

                swap(s[j],s[j+2]);
            }
        }
    }

    //using selection sort.
    // for(int i=0; i<n;i+=2){
    //     int min=i;
    //     for(int j=i+2; j<n; j+=2){
    //         if(s[j] < s[min]){
    //             min=j;
    //         }
    //     }
    //     if(min != i){
    //         swap(s[i],s[min]);
    //     }
    // }

    cout<<s<<endl;
}