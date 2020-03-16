#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    if (n2>45){
        cout << n1 << " " << n2-45;
    }
    else{
        int rem = 45-n2;
        n2 = 60 - rem;
        if(n1==0) n1 = 24;
        n1--;
        cout << n1 << " " << n2;
    }
}