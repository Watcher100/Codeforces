#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        //unordered_map<long long, long long> freq;  //count array frequency without sorting.(fast)
        map<long long, long long> freq; //count array frequency with sorting.
        long long mx=0;
        for(auto x : arr){
            freq[x]++;
            mx = max(mx,freq[x]);
        }

        if(mx == n){
            cout << 0 << "\n";
            continue;
        }

        long long ops = 0;
        long long cur = mx;
        while(cur < n){
            ops++;      
            cur *= 2;   
        }

        ops += (n - mx);

        cout << ops << "\n";
        
    }
}