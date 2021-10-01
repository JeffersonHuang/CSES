//
// Created by janking on 2021/6/20.
//

#include <bits/stdc++.h>

int main()
{
    int sz;
    std::cin >> sz;
    std::vector<int> arr(sz);
    long ans = 0;

    for (int i = 0; i < sz; i++) {
        std::cin >> arr[i];
    }

    for (int i = 1; i < sz; i++) {
       if(arr[i] < arr[i -1 ]){
           ans += (arr[i-1] - arr[i]);
           arr[i] = arr[i-1];
       }
    }
    std::cout << ans << std::endl;
    return 0;
}