#include<bits/stdc++.h>
using namespace std;
int main (){
    
    int t;
    cin>>t;
    while(t--){
        vector<int> arr;
        int n;
        cin>>n;
        int c=0,h=0;
        for(int i=2; i<=n; i+=2){
            arr.push_back(i);
            h++;
            c+=i;
        }
        int j=1,c1=0,d=0;
        if(n>2){
        while(true){
            arr.push_back(j);
            d+=j;
            c1++;
            if(c1==(n/2)-1){
                break;
            }
            j+=2;
        }
        }
        int k=j+2,f=0;
        while(true){
            d+=k;
            if(c==d){
                cout<<"YES"<<endl;
                arr.push_back(k);
                c1++;
                f++;
                break;
            }else if(c<d){
                cout<<"NO"<<endl;
                break;
            }else{
                d-=k;
            }
            k+=2;
        }
        if(f>0){
        for(int l=0; l<(c1+h); l++){
            cout<<arr[l]<<" ";
        }
        cout<<endl;
    }
    
    }
    
}