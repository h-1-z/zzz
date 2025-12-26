#include <iostream>
#include <cstdlib> // abs()
#include <limits>  // numeric_limits

using namespace std;

// 计算最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a); // 保证结果为正
}

// 计算最小公倍数
int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0; // 任一为0，LCM为0
    return abs(a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    cout << "请输入两个整数: ";

    // 输入验证
    if (!(cin >> num1 >> num2)) {
        cerr << "输入无效，请输入整数！" << endl;
        return 1;
    }

    int g = gcd(num1, num2);
    int l = lcm(num1, num2);

    cout << "最大公约数 (GCD): " << g << endl;
    cout << "最小公倍数 (LCM): " << l << endl;

    return 0;
}
