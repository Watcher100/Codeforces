#include<bits/stdc++.h>
using namespace std;
int main (){
    long long int n;
    cin>>n;
    if(n>0){
        cout<<n<<endl;
    }else{
        n=abs(n);
        vector<int> arr;
        while(n>0){
            int digit=n%10;
            arr.push_back(digit); //int to array
            n/=10;
        }
        vector<int> arr2;
        
        reverse(arr.begin(),arr.end()); //reverse a array
        for(int i=0; i<arr.size()-2; i++){
            arr2.push_back(arr[i]);
        }
        int a=min(arr[arr.size()-1],arr[arr.size()-2]);
        arr2.push_back(a);

         if(arr2[0]>0){
            cout<<"-";
         }

         for(int i=0; i<arr2.size(); i++){
            cout<<arr2[i];
        }
       
        
    }
    

}