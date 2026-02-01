#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int k;
    cin >> n >> k;
  vector<int> vec1(n);
  for(int i = 0; i < n; i++){
    cin >> vec1[i];
  }
  
  int l = 0;
  int min_window_sum = INT_MAX;
  int temp_sum = 0;
  int res = 0;
  for(int r = 0; r < vec1.size(); r++){
    temp_sum += vec1[r];
    while((r-l +1) > k){
      temp_sum -= vec1[l];
      l++;
    }
    if(((r-l+1) == k) && temp_sum < min_window_sum){
        res = l+1;
        min_window_sum = temp_sum;
    
    }
  }
    cout << res << '\n';
    return 0;
}