#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    int n,x;
    int cal;

    while(t--){
    cin>>n>>x;
    int i=1;
        while(true){
            cal=i^x;
            if(cal > 0){;
                cout<<(i+cal);
                i++;
                break;
            }
        }

}
}


