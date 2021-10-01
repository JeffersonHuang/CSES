//
// Created by janking on 2021/6/23.
//
#include <bits/stdc++.h>
using namespace  std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while(n){
        if( n % 10 == 5 || n % 10 == 0){
           ans++;
        }
        n--;
    }
    cout << ans << endl;
    return 0;
}
