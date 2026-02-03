#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        vector<string> ans;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != '0') {
                string num = "";
                num += s[i];
                for (int j = 0; j < s.size() - i - 1; ++j) {
                    num += '0';
                }
                ans.push_back(num);
            }
        }
        
        cout << ans.size() << '\n';
        for (auto &x : ans) {
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}