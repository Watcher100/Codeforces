#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        auto mx = max_element(arr,arr+n);
        //int  maxele = *mx;    //max element
        int maxindex = (mx-arr); //max index

        auto mi = min_element(arr,arr+n);
        //int  minele = *mi;    //min element
        int minindex = (mi-arr); //min index
        //int maxele = *max_element(arr,arr+n); //for only max element
        int max_max=(n-1)-maxindex;
        int max_min=maxindex-0;

        int min_max=(n-1)-minindex;
        int min_min=minindex-0;
        if((max_max>=max_min) && (min_max>=min_min)){
            cout<<max(max_min,min_min)+1<<endl;
        }else if((max_max<max_min) && (min_max<min_min)){
            cout<<max(max_max,min_max)+1<<endl;
        }else if((max_max<=max_min) && (min_max>=min_min)){
            int a=min((n-1)-minindex,maxindex-0);
            int b=min(a+1,max_max+min_min+2);
            cout<<b<<endl;
        }else if((max_max>=max_min) && (min_max<=min_min)){
            int c=min((n-1)-maxindex,minindex-0);
            int d=min(c+1,max_min+min_max+2);
            cout<<d<<endl;
        }
        

    }
}