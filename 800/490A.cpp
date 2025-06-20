#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> pro;
    vector<int> math;
    vector<int> pe;

    for(int i=0; i<n; i++){
        if(arr[i]==1){
            pro.push_back(i+1);
        }else if(arr[i]==2){
            math.push_back(i+1);
        }else if(arr[i]==3){
            pe.push_back(i+1);
        }
    }
    int pr=pro.size();
    int ma=math.size();
    int p=pe.size();

    int minNum = min(pr,ma);
    minNum = min(minNum,p);

    if(minNum>0){
        cout<<minNum<<endl;
        for(int i=0; i<minNum; i++){
            cout<<pro[i]<<" ";
            cout<<math[i]<<" ";
            cout<<pe[i]<<endl;
        }
    }else{
        cout<<minNum<<endl;
    }

}