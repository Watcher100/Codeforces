#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);

        for (char c : s) { //char frequency in a string 
            freq[c - 'a']++;
        }

        int odd_count = 0;
        for (int f : freq) {
            if (f % 2 == 1) {
                odd_count++;
            }
        }

        if (odd_count - 1 <= k) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
