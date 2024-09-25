#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main() {
    // 方法一：直接创建一个有序数组
    std::vector<int> sortedArray = { 1, 3, 5, 7, 9 };
    std::cout << "有序数组: ";
    for (int num : sortedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 方法二：生成一个随机数组并排序
    std::srand(std::time(0));
    std::vector<int> array(10);
    for (int& num : array) {
        num = std::rand() % 21; // 生成 0 到 20 之间的随机数
    }
    std::sort(array.begin(), array.end());
    std::cout << "生成并排序的数组: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
