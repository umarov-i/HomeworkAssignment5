#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = -1;
    for (int i = 0; i < n; i++) {
        bool isDivisor = true;

        for (int j = 0; j < n; j++) {
            if (i != j && arr[j] % arr[i] != 0) {
                isDivisor = false;
                break;
            }
        }

        if (isDivisor) {
            result = arr[i];
            break;
        }
    }
    cout << result;
    return 0;
}