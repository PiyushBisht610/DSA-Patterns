#include <iostream>
using namespace std;

int binary(int decnum){
    int ans=0, pow=1;
    while (decnum>0){
        int rem= decnum%2;
        decnum/=2;
        ans+= rem*pow;
        pow*=10;
    }
    return ans;
}

int main(){
    int n=5;
    cout<< binary(n);
    return 0;
}