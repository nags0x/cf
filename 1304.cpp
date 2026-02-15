#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    unordered_map<string, int> sMap;
    string result = "";
    string single_mid = "";

    while(n--){
        string temp;
        cin >> temp;
        sMap[temp]++;
    }   
    for(auto &p : sMap){
        string current = p.first;
        string temp = current;
        reverse(temp.begin(), temp.end());

        if ((temp != current && sMap.count(temp)) || (temp == current && sMap[current] > 1)) {
            if(result.find(temp) == string::npos && result.find(current) == string::npos){
                result += current;
            }
        }
        if(temp == current){
            if(single_mid.length() < temp.length())
            single_mid = current;            
        }
    }
    string rev = result;
    reverse(rev.begin(), rev.end());
    result += rev;

    result.insert(result.size() / 2, single_mid);
    cout << result.length() << endl;
    cout << result << endl;


    return 0;
}