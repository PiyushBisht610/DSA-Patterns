#include <iostream>
using namespace std;

int decimal(int binum){
    int ans=0, pow=1;
    while (binum>0){
        int rem= binum%10;
        ans+= rem*pow;
        pow*=2;
        binum/=10;
    }
    return ans;
}

int main(){
    int n=101;
    cout<< decimal(n);
    return 0;
}