//
// Created by janking on 2021/6/19.
//
#include <bits/stdc++.h>

int main() {
    std::string dna;
    std::cin >> dna;

    size_t sz = dna.size();
    std::vector<int> dp(sz);
    dp[0] = 1;

    for (int i = 1; i < sz; i++) {
        if (dna[i - 1] == dna[i])
            dp[i] = dp[i - 1] + 1;
        else
            dp[i] = 1;
    }
    std::cout << *std::max_element(dp.begin(), dp.end()) << std::endl;
    return 0;
}
