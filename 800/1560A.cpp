#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> arr;
    int i=1;
    while(i<=1666){
        if(i%3!=0 && i%10!=3){
            arr.push_back(i);
        }
        i++;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<arr[n-1]<<endl;
    }
}