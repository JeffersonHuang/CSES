//
// Created by Janking on 2021/10/2.
//

#include <bits/stdc++.h>
using namespace  std;

int main()
{
    int n,m,k;
    cin >> n >> m >> k;

    vector<int> arrN(n);// applicants;
    vector<int> arrM(m); // apartments;

    for (int i = 0; i < n; i++) {
        cin >> arrN[i];
    }
    for (int i = 0; i < m; i++)  {
        cin >> arrM[i];
    }

    sort(arrN.begin(), arrN.end());
    sort(arrM.begin(), arrM.end());

    int res = 0, x = 0, y = 0;

    while (x < n && y < m) {
        //符合申请者的偏差值
        if (arrN[x] - k <= arrM[y] && arrN[x] + k  >= arrM[y]){
            res++;
            x++;
            y++;
        } else if (arrN[x] - k > arrM[y] ){
            //缩小申请者的偏差值，再匹配
           y++;
        } else {
            x++;
        }
    }

    cout << res << endl;

    return 0;
}