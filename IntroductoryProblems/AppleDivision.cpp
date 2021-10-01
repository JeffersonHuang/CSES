//
// Created by Janking on 2021/10/1

#include <bits/stdc++.h>
using namespace  std;

class Solution{
public:
    int appleDivision(vector<int>& vec){
        sort(vec.begin(), vec.end());
        int sumWeight = 0;
        for (int i = 0; i < vec.size(); i++)  {
           sumWeight += vec[i] ;
        }

        int group = 0;
        int r = vec.size() - 1;
        int miniDiff = sumWeight;
        while ( r >= 0) {
           group += vec[r] ;
           if (sumWeight - group  < miniDiff){
               miniDiff = sumWeight - group;
           }
        }
        return miniDiff;
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

