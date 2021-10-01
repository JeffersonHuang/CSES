//
// Created by janking on 2021/6/19.
//
#include <bits/stdc++.h>

int main()
{
    long n;
    std::cin >> n;

    int s = (1 + n) * n / 2;
    int sum = 0;
    int tmp = 0;

    n--;
    while ( n-- ) {
        std::cin >> tmp;
        sum += tmp;
    }
    std::cout << s - sum << std::endl;
    return 0;
}
// 注意类型范围