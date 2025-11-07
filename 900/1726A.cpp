#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int t1=0;
        for(int i=1; i<n; i++){
            int cal=arr[i]-arr[0];
            if(cal>t1){
                t1=cal;
            }
        }
        int t2=0;
        for(int i=0; i<n-1; i++){
            int cal=arr[n-1]-arr[i];
            if(cal>t1){
                t1=cal;
            }
        }
        int t3=0;
        for(int i=0; i<n-1; i++){
            int cal=arr[i]-arr[i+1];
            if(cal>t1){
                t1=cal;
            }
        }
        int maxcal=max(t1,t2);
        int finalcal=max(maxcal,t3);

        cout<<finalcal<<endl;



        
    }
}