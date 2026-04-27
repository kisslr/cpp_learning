#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// 只需要保留最后 500 位，数组开 500 足够
const int LEN = 500;
// ans 存最终结果，base 存快速幂的底数（平方用）
int ans[LEN], base[LEN];

// 高精度乘法：a *= b，结果只保留最后 LEN 位
void mul(int *a, int *b) {
    int temp[LEN] = {0}; // 临时数组存中间结果
    for (int i = 0; i < LEN; ++i) {
        if (a[i] == 0) continue; // 剪枝：是 0 就跳过
        for (int j = 0; j < LEN - i; ++j) { // 只算到 LEN-1 位，超过的丢弃
            temp[i + j] += a[i] * b[j];
            temp[i + j + 1] += temp[i + j] / 10; // 进位
            temp[i + j] %= 10;
        }
    }
    memcpy(a, temp, sizeof(temp)); // 把结果复制回 a
}

// 快速幂：计算 2^p，结果保留最后 LEN 位在 ans 数组
void qpow(int p) {
    ans[0] = 1; // 初始化为 1（乘法单位元）
    base[0] = 2; // 底数初始化为 2
    while (p > 0) {
        if (p & 1) { // 如果当前二进制位是 1，ans *= base
            mul(ans, base);
        }
        mul(base, base); // base 平方
        p >>= 1; // 指数右移一位（除以 2）
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p;
    cin >> p;

    // 1. 计算位数：公式是 floor(p * log10(2)) + 1
    cout << (int)(p * log10(2)) + 1 << endl;

    // 2. 快速幂计算 2^p 的最后 500 位
    qpow(p);

    // 3. 2^p - 1：因为 2^p 最后一位非 0，直接减 1 即可，无需处理借位
    ans[0]--;

    // 4. 格式化输出：每行 50 位，共 10 行，高位补 0
    for (int i = LEN - 1; i >= 0; --i) {
        cout << ans[i];
        if (i % 50 == 0) cout << endl;
    }

    return 0;
}