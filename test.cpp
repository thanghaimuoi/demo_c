#include <iostream>
#include <climits>
using namespace std;

const float pi = 3.14;

int main(int argc, char** argv) {
    int phanDu = 5 % 3; //5 = 3 * 1 + 2;
    // số dư = số chia - ((bị chia) * nguyên);
    cout << "du ra : " << phanDu;
}
// khoảng giá trị của số nguyên, số thực trong c++
// unsigned -> số lớn hơn 0
// const