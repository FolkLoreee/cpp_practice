#include <bits/stdc++.h>
using namespace std;

vector<char> arr;

int main(){
    string str;
    cin >> str;
    for (int i = 0; i < str.length();i++){
        if((str[i] == toupper(str[i]))&&(str[i]!='-'))arr.push_back(str[i]);
    }
    for (int i = 0; i < arr.size();i++){
        cout << arr[i];
    }
}