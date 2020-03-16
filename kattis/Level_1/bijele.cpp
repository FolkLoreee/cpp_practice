#include <iostream>

using namespace std;
// One king

// One queen

// Two rooks

// Two bishops

// Two knights

// Eight pawns
int main(){
    int arr[6];
    int req[6] = {1,1,2,2,2,8};
    int diff[6];
    cin >> arr[0];
    diff[0] = req[0]-arr[0];
    cout << diff[0];
    for(int i =1;i<6;i++){
        cin >> arr[i];
        diff[i] = req[i]-arr[i];
        cout << " " << diff[i];
    }
}