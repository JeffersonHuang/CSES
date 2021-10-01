//
// Created by janking on 2021/6/20.
//
#include <bits/stdc++.h>
//
//TIME LIMIT EXCEEDED
#if 0
int main()
{
    std::size_t  sz;
    std::cin >> sz;
    if (sz == 1) return  1;
    std::vector<int> vec(sz);

    for (int i = 1; i <= sz; i++) {
        vec[i - 1] = i;
    }

    while (std::next_permutation(vec.begin(),vec.end())){
        int i;
        for (i = 1; i < sz; i++){
            if(std::abs(vec[i] - vec[i - 1]) == 1){
                break;
            }
        }
        if(i == sz){
            for (auto it : vec){
                std::cout << it << " ";
            }
            return 0;
        }
    }
    std::cout << "NO SOLUTION" << std::endl;
    return  0;
}

//TIME LIMIT EXCEEDED
#elif 1
int main() {
    std::size_t sz;
    std::cin >> sz;
    if (sz == 1) {
        std::cout << 1 << std::endl;
        return 0;
    }
    std::vector<int> vec(sz,0);

    for (size_t i = 1; i <= sz; i++) {
        vec[0] = i;
        size_t index = 1;
        while(index < sz) {
            size_t tmp = index;
            for (size_t j = 1; j <= sz; j++) {
                if (abs(vec[index - 1] - j) != 1 && std::find(vec.begin(),vec.end(),j) == vec.end())
                    vec[index++] = j;
            }
            if(tmp == index){
                break;
            }
        }
        if ( index == sz){
            for (auto it : vec){
                std::cout << it << " ";
            }
            return 0;
        }

    }
    std::cout << "NO SOLUTION" << std::endl;
    return 0;
}
#endif