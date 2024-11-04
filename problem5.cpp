#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int upperCount = 0;
    int lowerCount = 0;
    string upperChars = "";
    string lowerChars = "";

    for (char c : s) {
        if (isupper(c)) {
            upperCount++;
            upperChars += c;
        } else if (islower(c)) {
            lowerCount++;
            lowerChars += c;
        }
    }

    cout << upperCount;
    for (char c : upperChars) {
        cout << " " << c;
    }
    cout << endl;

    cout << lowerCount;
    for (char c : lowerChars) {
        cout << " " << c;
    }
    cout << endl;


    return 0;
}
