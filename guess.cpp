#include <bits/stdc++.h>
using namespace std;
int main() {
    int low = 1, high = 20;
    cout << "Guess a number between "
         << low << " and " << high << ".\n";
    srand(time(0));
    int num = rand() % 20 + 1, x;
    while (true) {
        cin >> x;
        if (x > num) cout << "It's too high.\n";
        else if (x < num) cout << "It's too low\n";
        else {
            cout << "It is just fine\n";
            break;
        }
    }
    return 0;
}