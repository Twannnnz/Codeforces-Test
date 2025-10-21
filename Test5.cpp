#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int n , m;
    bool found = true; 
    for ( int i  = 0 ; i < s1.length() && found  ; i++ ){
        for ( int j = 0 ; j < s2.length() ; j++){
            if (s1[i] == s2[j]){
                n = i;
                m = j;
                found = false;
                break;
            }
        }
    }


    for ( int i = 0 ; i < s2.length() ; i++ ){
        for ( int j = 0 ; j < s1.length() ; j++ ){
            if ( i == m ){
                cout << s1[j];
            } 
            else if ( j == n ){
                cout << s2[i];
            }
            else {
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}


