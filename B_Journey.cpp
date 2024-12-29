#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int cycleSum = a + b + c;
        int fullCycles = n / cycleSum;
        int remaining = n % cycleSum;

        int day = fullCycles * 3;
        int covered = fullCycles * cycleSum;

        if (remaining > 0) {
            day++;
            covered += a;
            if (covered < n) {
                day++;
                covered += b;
                if (covered < n) {
                    day++;
                    covered += c;
                }
            }
        }

        cout << day << endl;
    }

    return 0;
}