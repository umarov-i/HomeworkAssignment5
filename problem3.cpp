#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int j = 0; j < n; ++j) {
            if (i != j && arr[i] == arr[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << arr[i];
        }
    }
    return 0;
}




