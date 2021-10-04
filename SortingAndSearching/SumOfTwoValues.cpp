//
// Created by Janking on 2021/10/4.
//
#include <bits/stdc++.h>
using namespace std;

/*
 *                   | map             | unordered_map
---------------------------------------------------------
Ordering        | increasing  order   | no ordering
                | (by default)        |

Implementation  | Self balancing BST  | Hash Table
                | like Red-Black Tree |

search time     | log(n)              | O(1) -> Average
                |                     | O(n) -> Worst Case

Insertion time  | log(n) + Rebalance  | Same as search

Deletion time   | log(n) + Rebalance  | Same as search
 * */
int main()
{
    int n,x;
    cin >> n >> x;
    int tmp;

//   unordered_map<int,int> map; // <x - i , position>
    map<int,int> map; //使用 unordered_map case 11 无法通过
    bool flag = false;
    for (int i = 0; i < n ;i++) {
        cin >> tmp;
        auto it = map.count(tmp);
        if (it) {
            cout << map[tmp]  + 1<< " "
                << i + 1 << endl;
            flag = true;
            break;
        }else {
            map[x-tmp] = i;
        }
    }
    if (!flag) {
        cout << "IMPOSSIBLE" << endl;
    }

//    for (auto &item : map) {
//        cout << item.first << ' ' << item.second << endl;
//    }

    return 0;
}
