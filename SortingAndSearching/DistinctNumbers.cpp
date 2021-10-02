//
// Created by Janking on 2021/10/2.
//

#include <bits/stdc++.h>
using namespace  std;

//创建class类，数据集合过大时，会超时
class Solution{
public:
    int distinctNumbers() {
        int n = 0;
        cin >> n;
        int tmp;
        unordered_set<int> set;
        for (int i = 0; i < n; i++) {
           cin >> tmp;
           set.insert(tmp);
        }

        return set.size();
    }

};

    int main()
    {
      //  ios_base::sync_with_stdio(false);
        //cin.tie(NULL);
        int n, ele;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            s.insert(ele);
        }
        cout << s.size();
        return 0;
}