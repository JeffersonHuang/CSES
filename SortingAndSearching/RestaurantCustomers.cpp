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

    vector<pii> customers(n);
    for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        customers[i] = make_pair(a,b);
    }

    sort(customers.begin(),  customers.end(), [&](pii x, pii y){
        if (x.first < y.first)
            return true;
        return false;
    });

    int l = customers[0].first;
    int r = customers[n-1].second;

    int res = 0;
    int aux = 0;
    for (int i = l ; i <= r; i++) {
        for (int j = 0; j < n; j++) {
            if (customers[j].second >= i && customers[j].first <= i)
                aux++;
        }
        res = max(aux, res);
        aux = 0;
    }
    cout << res << endl;
//    for (int i = 0; i < n; i++) {
//        cout << customers[i].first << " " << customers[i].second << endl;
//    }
    return 0;
}
