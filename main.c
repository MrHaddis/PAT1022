#include <stdio.h>

//MrHaddis
//https://github.com/MrHaddis/PAT1022

int main() {
    //数A 数B a+b的和
    long a, b, sum;
    //进制
    int d;
    //存放余数
    int sumArray[100];
    //定义下标
    int count = 0;
    //获取输入
    scanf("%ld %ld %d", &a, &b, &d);
    //求和
    sum = a + b;
    //为0的时候 直接输入0
    if (sum == 0) {
        printf("0");
        return 0;
    }
    //循环求余数并存储
    while (sum != 0) {
        sumArray[count++] = sum % d;
        //每求一次就除以10
        sum = sum / d;
    }
    //倒序输出结果
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", sumArray[i]);
    }
    return 0;
}