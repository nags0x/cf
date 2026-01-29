#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];



        for (int i = n - 1; i >= 0; i--) { 
                if (i == n - 1) {
                    a[i] = max(a[i], b[i]);
                } else {
                    int compare = max(a[i + 1], b[i]);
                    if (a[i] < compare){
                        a[i] = compare;
                    }
                }
            }

            vector<ll> pref(n+1, 0);
            for(int i = 0; i < n; i++){
                pref[i+1] = pref[i] + a[i];
            }
 
        while (q--) {
            int start, end;
            cin >> start >> end;

           cout << pref[end] - pref[start - 1] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}