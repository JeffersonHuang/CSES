//
// Created by janking on 2021/6/21.
//
#include <bits/stdc++.h>

int main()
{
    size_t n;
    std::cin >> n;
    n = (1 + n) * n / 2;
    if ( n % 2 == 0)
        std::cout <<"YES"<<std::endl;
    else
        std::cout <<"NO"<<std::endl;
    return 0;
}