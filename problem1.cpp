#include <iostream>
using namespace std;
int main() {
int n;
    cin >> n;
    int r1[n];
    int r2[n];
    for (int i = 0; i < n; i++) {
        cin >> r1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> r2[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += r1[i] * r2[i];
    }
    cout << sum;
    return 0;
}
