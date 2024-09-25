#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main() {
    // ����һ��ֱ�Ӵ���һ����������
    std::vector<int> sortedArray = { 1, 3, 5, 7, 9 };
    std::cout << "��������: ";
    for (int num : sortedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // ������������һ��������鲢����
    std::srand(std::time(0));
    std::vector<int> array(10);
    for (int& num : array) {
        num = std::rand() % 21; // ���� 0 �� 20 ֮��������
    }
    std::sort(array.begin(), array.end());
    std::cout << "���ɲ����������: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
