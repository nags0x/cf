//at the end of the day, we need to just return the |max(A) - min(B)|,
//since team formation isnt neccessary so inshort ig it's min(\A-B\)
//,so it must be double for loop
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int x = 0;
    while(x < t){
        int l = 0, r = 0;
        int n;
        int min_mod = INT_MAX;
        cin >> n;
        vector<int> vec1(n);
        for(int i = 0; i < n; i++){
            cin >> vec1[i];
        }
        for(int i = 0; i < n; i++){
            int temp =  0;
            for(int j = i+1; j < n; j++){
                temp = abs(vec1[i] - vec1[j]);
                min_mod = min(min_mod, temp);
            }
        }
        cout <<  min_mod << endl;
        x++;
    }
    
    return 0;
}