#include <iostream>
using namespace std;

void print(int cnt) {
    if (cnt <= 0) {
        return;
    }
    cout << cnt << endl;
    print(cnt - 1); // Decrement cnt for the next call
}

int main() {
    int startingNumber = 5; // Change this value to start from a different number
    print(startingNumber);
    return 0;
}
