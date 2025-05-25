#include<bits/stdc++.h>
using namespace std;
int main (){
    long long int n;
    cin>>n;
   
    int hundred1 = n%100;
    int hundred2 = n/100;

    int twenty1 = hundred1%20;
    int twenty2 = hundred1/20;

    int ten1 = twenty1%10;
    int ten2 = twenty1/10;

    int five1 = ten1%5;
    int five2 = ten1/5;

    int one1 = five1%1;
    int one2 = five1/1;

    cout<<hundred2+twenty2+ten2+five2+one2<<endl;

    // int n;
    // cin >> n;
 
    // int denominations[] = {100, 20, 10, 5, 1};
    // int bills_count = 0;
 
    // for (int i = 0; i < 5; i++) {
    //     bills_count += n / denominations[i];
    //     n %= denominations[i];
    // }
 
    // cout << bills_count << endl;

}