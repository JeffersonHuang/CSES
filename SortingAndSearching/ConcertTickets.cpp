//
// Created by Janking on 2021/10/3.
//

#include <bits/stdc++.h>
using namespace  std;

int main()
{
    int n,m;
    multiset<int> tickets;
    cin >> n >> m;

    int tmp;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        tickets.insert(tmp);
    }

    int t;
    for (int i = 0;i < m; i++) {
        cin >> t;
        auto it = tickets.upper_bound(t);
        if (it == tickets.begin()) {
           cout << -1 << endl;
        }
        else {
            cout << *(--it) << endl;
            tickets.erase(it);
        }
    }
    return 0;
}
