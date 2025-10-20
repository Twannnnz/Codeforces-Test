    #include <iostream>
    #include <string>
    using namespace std;

    int main(){
        string s1 , s2;
        int n , m;
        s1 = "HELLOWORLD";
        s2 = "SUPERMAN";

        for ( int i = 0 ; i < s1.length() ; i++ ){
            for (int j = 0 ; j < s2.length() ; j++ ){
                if (s1[i] == s2[j]){
                    cout << s1[i] << " " << s2[j];
                }

            }
        }
       

        return 0; 
    }