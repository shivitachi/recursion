#include<iostream>
using namespace std;

int powerLogarithmic(int x,int n){
    // write your code here
    if (n<=0){
        return 1;
    }

    int xpowernby2 = powerLogarithmic(x, n/2);
    int xpowrn = xpowernby2*xpowernby2;

    if(n%2 == 1){

        xpowrn = xpowrn*x;

    }
    return xpowrn;
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}
