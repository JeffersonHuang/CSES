#include <bits/stdc++.h>
int main() {
    long n;
    std::cin >> n;
    std::cout << n << " ";
    while (n > 1) {
        if (!(n % 2)) {
            n /= 2;
        } else {
            n *= 3;
            n++;
        }
        std::cout << n << " ";
    }
    return 0;
}