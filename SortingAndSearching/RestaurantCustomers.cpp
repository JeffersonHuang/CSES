//
// Created by Janking on 2021/10/3.
//
#include <bits/stdc++.h>
using namespace  std;

#define pii pair<int,int>
int main()
{
    int n;
    cin >> n;

    vector<pii> customers;
    for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        customers.emplace_back(a,1);
        customers.emplace_back(b,-1);
    }
    sort(customers.begin(),  customers.end());

    int aux = 0;
    int res = 0;
    for (auto x : customers) {
        aux += x.second;
        res = max(res, aux);
    }
    cout << res << endl;
//    for (int i = 0; i < n; i++) {
//        cout << customers[i].first << " " << customers[i].second << endl;
//    }
    return 0;
}
