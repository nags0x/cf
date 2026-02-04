#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  while (n != 0) {

    string word;
    cin >> word;

    if (word.length() <= 10) {
      cout << word;
    } else {
      cout << word[0] << word.length() - 2 << word[word.length() - 1];
    }
    cout << endl;
    n--;
  }
  return 0;
}