#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int func(){


    vector<vector<int>> vec1(5, vector<int>(5));
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> vec1[i][j];
        }
    }
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(vec1[i][j] == 1){
        int min_cost_mid = abs(i-2) + abs(j-2);
        return min_cost_mid;
      }
    }
  }
  return 0;
}

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
  cout << func() << "\n";
  return 0;
}