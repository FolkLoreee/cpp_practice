#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    int n, addition = 0;
    scanf("%d", &n);
    if(n>0){
        for (int i =0;i<n;i++){
            addition+=(int)pow(2,i);
        }
    }
    printf("%d", (int)pow(2+addition,2));
}