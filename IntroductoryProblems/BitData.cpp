//
// Created by janking on 2021/6/23.
//
#include <bits/stdc++.h>

using namespace std;

string BigData(int n){
    vector<int> ans;
//    ans.push_back(2);
    ans.push_back(1);
    int ch = 0;

    for(int i = 0; i < n; i++) {
        for (vector<int>::iterator it = ans.begin(); it != ans.end(); it++) {
            int aux = *it * 2; // 16 * 2 = 32
            *it = (aux % 10) + ch; //修改本位; 32 / 10 = 3;  % 10 = 2
            ch = aux / 10; //获取进位
        }

        if (ch != 0)
            ans.push_back(ch);
        cout << i << ":";
        for (vector<int>::reverse_iterator it = ans.rbegin(); it != ans.rend(); it++) {
            cout << *it;
        }
        cout << endl;
        ch = 0;
    }
    cout << endl;
    string res;
    for (auto it : ans){
        res +=  to_string(it);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    BigData(n);
    return 0;
}