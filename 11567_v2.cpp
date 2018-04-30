#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, step;

int main() {
    while (scanf("%lld", &n) == 1) {
        step = 0;
        while (n != 0) {
            if (n % 2 == 0) n /= 2;
            else {
                if ((((n-1) / 2) % 2 == 0) || (n-1 == 2)) n--;
                else n++;
            }
            step++;
        }
        printf("%lld\n", step);
    }
}
