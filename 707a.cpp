// InputCopy
// 3 2
// W W
// W W
// B B
// OutputCopy
// #Black&White


#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
  vector<vector<char>> vec1(r, vector<char>(c));
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin >> vec1[i][j];
      if((vec1[i][j] != 'B') && (vec1[i][j] != 'W') && (vec1[i][j] != 'G')){
        cout << "#Color" << "\n";
        return 0;
      }
    }
  }
  cout << "#Black&White" << "\n";
  return 0;
}