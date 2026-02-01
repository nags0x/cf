// HoUse
// house
//majority wins
//if size of lower_case and upper_case is same then lower_case
#include <iostream>
#include <algorithm>
using namespace std;

void func(){
  string word;
  cin >> word;
  int size_word = word.length();
  //aproach = i wanna only traverse once keep the majority then if word[i] is upper -> +1 or else -1;
  //at the end if majority > 1 {toUpper} majority <= 1 {toLower}
  int majority = 0;
  int i = 0;
  while(i < size_word){
    (isupper(word[i])) ? majority += 1 : majority -= 1;
    i++;
  }
  if (majority >= 1){
    transform(word.begin(), word.end(), word.begin(), ::toupper);
    cout << word << "\n";
  }else {
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    cout << word << "\n";
  }
  
}

int main(){
  func();
  return 0;
}