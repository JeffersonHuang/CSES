//
// Created by Janking on 2021/10/4.
//
#include <bits/stdc++.h>
using namespace  std;


int main()
{
    int n;
    cin >> n;
    int x,y;
    vector<pair<int,int>> vec;
    for (int i = 0; i < n; i++) {
       cin >> x >> y;
       vec.emplace_back(y,x);
    }
    sort(vec.begin(), vec.end());
    int curEnd = 0;
    int ans = 0;
    for (auto &item : vec) {
       if (item.second >= curEnd) {
          ans++;
          curEnd = item.first;
       }
    }
    cout << ans <<endl;
    return 0;
}

