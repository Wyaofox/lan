// 555555��Լ������С����λ����_______��������λ����_______��
//105,777
#include <stdio.h>

int main() {
    int target = 555555;  // Ҫ����Լ����Ŀ������
    int min_three_digit = 1000;  // �ȳ�ʼ��Ϊ����λ�����ֵ������Ѱ����С��λ��Լ��
    int max_three_digit = 100;   // �ȳ�ʼ��Ϊ��С��λ��������Ѱ�������λ��Լ��

    // ����С��λ��100��ʼ�����������λ��999��Ѱ��Ŀ�����ֵ�Լ��
    for (int i = 100; i <= 999; i++) {
        if (target % i == 0) {  // ���i������Ŀ�����֣�˵��i����Լ��
            // ������С��λ��Լ��
            if (i < min_three_digit) {  
                min_three_digit = i;
            }
            // ���������λ��Լ��
            if (i > max_three_digit) {
                max_three_digit = i;
            }
        }
    }

    printf("555555��Լ������С����λ���� %d��������λ���� %d\n", min_three_digit, max_three_digit);

    return 0;
}
