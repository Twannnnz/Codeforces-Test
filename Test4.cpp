#include <iostream>
using namespace std;

int main(){
    int n , x; 
    cin >> n;
    cin >> x;
    int temp = 0;
    
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= n ; j++ ){
            if ( i * j == x){
                temp = temp + 1;
            }
        }
    }

    cout << temp;
    return 0;

}
