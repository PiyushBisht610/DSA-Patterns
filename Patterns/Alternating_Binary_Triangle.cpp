#include <iostream>
using namespace std;

int main(){
    int n=5, st;
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            if (i%2==0 && j==0){
                st=1;
                cout<< st;
            }else if (i%2!=0 && j==0){
                st=0;
                cout<< st;
            }else{
                st=!st;
                cout<< st;
            }
        }
        cout<< endl;
    }
    return 0;
}

// OUTPUT:
// 1
// 01
// 101
// 0101
// 10101