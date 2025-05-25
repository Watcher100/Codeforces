#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int mili=k*l;
    int tost1=mili/nl;

    int tost2=c*d;
    int tost3=p/np;

    int arr[3];
    arr[0]=tost1;
    arr[1]=tost2;
    arr[2]=tost3;

    int min=arr[0];
    for(int i=0; i<3; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min/n<<endl;
}