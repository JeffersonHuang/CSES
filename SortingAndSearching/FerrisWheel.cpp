//
// Created by Janking on 2021/10/2.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int children[n];
    bool visited[n];

    for (int i = 0; i < n; i++) {
        cin >> children[i];
        visited[i]  = false;
    }

    int l = 0;
    int r = n - 1;
    int res = 0;
    sort(children, children+n);
    while (l < r) {
        if (children[l] + children[r] > x)  {
           r--;
        } else {
            visited[l] = visited[r] = true;
            res++;
            r--;
            l++;

        }
    }

    for (int i = 0; i < n; i++) {
        res += !visited[i];
//        res += visited[i] == false;
    }

    cout << res << endl;

    return 0;
}
