//4 5
//3 1 2 1
//ans - 3 //max length of subarrary which falls under the time t
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void func(){
    int n, t;
    cin >> n >> t;
    int i = 0;
    vector<int> nums(n);
    while(i < n){
        cin >> nums[i];
        i++;
    }
  int l = 0;
  int temp_sum = 0;
  int max_window_size = 0;
  for(int r = 0; r < nums.size(); r++){
    temp_sum += nums[r];
    while(temp_sum > t){
      temp_sum -= nums[l];
      l++;
    }
    int current_window_size = r-l +1;
    if(max_window_size < current_window_size){
        max_window_size = current_window_size;
    }
  }

  cout << max_window_size;
}

int main(){
  func();
  return 0;
}