#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100000];
    int leaders[100000];
    int k = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxRight = arr[n - 1];
    leaders[k++] = maxRight;

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders[k++] = maxRight;
        }
    }

    // Reverse print
    for(int i = k - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }

    return 0;
}
