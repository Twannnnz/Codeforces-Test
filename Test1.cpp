#include <iostream>
using namespace std;

int Money(int Tong, int n){
    if (Tong < n ){
        return 0;
    }
    else {
        return Tong - n ;
    }
}

int main(){
    int k , n , m;
    cin >> k >> n >> m;
    
    int Tong = k * m;

    cout << Money(Tong,n);

    return 0;
}