//
// Created by janking on 2021/6/21.
//

#include <bits/stdc++.h>

void printerSpiral(std::string name, int n) {
    std::cout << name << "x" << name << "螺旋矩阵：" << std::endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int t;
            t = i > j ? i : j;
            int pointer = t * t - t + 1;

            int x = t - i;
            int y = t - j;

            if (!x) {
                if (i % 2 == 0) {
                    std::cout << pointer + y - x << "\t";
                } else {
                    std::cout << pointer - y + x << "\t";
                }
            } else {
                if (j % 2 == 0) {
                    std::cout << pointer - x << "\t";
                } else {
                    std::cout << pointer + x << "\t";
                }
            }
        }
        std::cout << std::endl;
    }
}

int main() {
//    size_t sz;
//    std::cin >> sz;
//    for (size_t i = 0; i < sz; i++){
//        size_t row,column;
//        std::cin >> row;
//        std::cin >> column;
//        size_t n;
//        n = row > column ? row : column;
//        size_t pointer = n * n - n + 1;
//        //先确定如何偏移
//        size_t x = n - row;  //行
//        size_t y = n - column; // 列
//
//        if(!x) {
//            if (row % 2 == 0) {
//                std::cout << pointer + y -x << std::endl;
//            } else {
//                std::cout << pointer - y +x << std::endl;
//            }
//        }
//        else{
//            if (column % 2 == 0){
//                std::cout << pointer - x << std::endl;
//            }else{
//                std::cout << pointer + x << std::endl;
//            }
//        }
//
//
//    }
    for (int i = 2; i <= 10; i++)
        printerSpiral(std::to_string(i), i);
    return 0;
}