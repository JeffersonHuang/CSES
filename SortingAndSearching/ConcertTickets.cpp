//
// Created by Janking on 2021/10/3.
//

#include <bits/stdc++.h>
using namespace  std;

int main()
{
    int n,m;
    cin >> n >> m;

    vector<int> tickets(n);
    vector<int> customers(m);
    vector<int> res(m,-1);

    for (int i = 0; i < n; i++) {
        cin >> tickets[i];
    }

    for (int i = 0; i < m ; i++) {
        cin >> customers[i];
    }
    int index = -1;


    //TIME LIMIT EXCEEDED
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int diff = customers[i] - tickets[j];
            if (diff >= 0) {
               if (res[i] < tickets[j]) {
                   res[i] = tickets[j];
                   index = j;
               }
            }
        }
        tickets[index]  = INT_MAX;
    }

    for (int i = 0;i < m; i++) {
        cout << res[i] << endl;
    }


    return 0;
}
