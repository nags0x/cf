// 2 
// 1 0 0 //here rows determine question_number
// 0 1 1
//1

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main(){
  int n;
  cin >> n;
  int i = 0, count = 0;
  while(i < n){
    int a,b,c;
    int sum = 0;
    cin >> a >> b >> c;
    sum = a + b + c;
    if(sum >= 2){
      count += 1;
    }
    i++;
  }
  cout << count << "\n";
  return 0;
}