#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        string s;
        cin >> s;

        vector<string> endings = {"00", "25", "50", "75"};
        int answer = INT_MAX;

        for(string t : endings){

            int remove = 0;
            int i = s.size() - 1;
            int j = 1;

            while(i >= 0 && j >= 0){

                if (s[i] == t[j]){
                    j--;
                }else{
                    remove++;
                }
                i--;
            }
            answer = min(answer,remove);
        }

        cout <<answer<< endl;
    }
}
