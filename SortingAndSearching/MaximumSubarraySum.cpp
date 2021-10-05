//
// Created by Janking on 2021/10/5.
//
#include <bits/stdc++.h>
using namespace  std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    vector<long int> dp(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }



    dp[0] = vec[0];
    for (int i = 1; i < n; i++) {
        if (dp[i - 1] < 0) {
            dp[i] = vec[i];
        }else {
            dp[i] = dp[i - 1] + vec[i];
        }
    }
//数据过大 注意int方位 10^10 2147 483 647
//
//    long int mx = vec[0], sm = vec[0];
//    for (int i = 1; i < n; i++) {
//        sm = max(sm + (long)vec[i], (long)vec[i]);
//        mx = max(mx, sm);
//    }
    cout << *max_element(dp.begin(),  dp.end()) << endl;

    return 0;
}

