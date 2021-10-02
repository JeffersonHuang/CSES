//
// Created by Janking on 2021/10/1

#include <bits/stdc++.h>
using namespace  std;

class Solution{
public:
    int appleDivision(vector<int>& vec){
        sort(vec.begin(), vec.end());
        int groupA = 0;
        int groupB = 0;

        for (int i = 0; i < vec.size(); i++) {
            if (groupA > groupB)
                groupB += vec[i];
            else
                groupA += vec[i];
        }

    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n,0);

    for (int i = 0; i < n ; i++) {
        cin >> vec[i];
    }

    Solution s;
    int res = s.appleDivision(vec);
    cout << "res: " << res <<endl;
    return 0;
}

