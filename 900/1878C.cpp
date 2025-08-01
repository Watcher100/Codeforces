#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<long long> arr;
   
    long long sum=0;
    for(int i=1; i<=200000; i++){
        sum+=i;
        arr.push_back(sum);  
    }
    while (t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long d;
        if(n==k){
            d=arr[k-1];
        }else{
            d=(arr[n-1])-(arr[(n-k)-1]);
        }
        if((arr[k-1]<=x) && (d>=x)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }

}
