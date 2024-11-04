#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int minPrice = arr[0];
    int maxProfit = 0;

    for (int i = 1; i < n; ++i) {
        int profit = arr[i] - minPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
        if (arr[i] < minPrice) {
            minPrice = arr[i];
        }
    }

    cout << maxProfit;
    return 0;
}