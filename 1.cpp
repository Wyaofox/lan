// 555555的约数中最小的三位数是_______，最大的三位数是_______。
//105,777
#include <stdio.h>

int main() {
    int target = 555555;  // 要查找约数的目标数字
    int min_three_digit = 1000;  // 先初始化为比三位数大的值，用于寻找最小三位数约数
    int max_three_digit = 100;   // 先初始化为最小三位数，用于寻找最大三位数约数

    // 从最小三位数100开始遍历到最大三位数999，寻找目标数字的约数
    for (int i = 100; i <= 999; i++) {
        if (target % i == 0) {  // 如果i能整除目标数字，说明i是其约数
            // 更新最小三位数约数
            if (i < min_three_digit) {  
                min_three_digit = i;
            }
            // 更新最大三位数约数
            if (i > max_three_digit) {
                max_three_digit = i;
            }
        }
    }

    printf("555555的约数中最小的三位数是 %d，最大的三位数是 %d\n", min_three_digit, max_three_digit);

    return 0;
}
