#include <iostream>
#include <climits>
using namespace std;

void Input_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    Input_arr(arr, n);
    
    int max = INT_MIN;  // số âm max nhất của int

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 && arr[i] > max) {
            max = arr[i];
        }
    }

    if (max == -10001)
        cout << 0;
    else
        cout << max;

    return 0;
}
