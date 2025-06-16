#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,c=0,d=-1;
        cin>>n;
        string s=to_string(n);
        int l=s.size();
        int i=10;
        vector<int> arr; 
        while(true){
            if(n%i!=0){
                arr.push_back(n%i);
                n=n-(n%i);
                c++;
            }
            d++;
            if(d==l){
                break;
            }
            i*=10;
        }

        cout<<c<<endl;
        for(int i=0; i<c; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}