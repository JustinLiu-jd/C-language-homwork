//
//  main.c
//  3-calculator

#include <stdio.h>
int main() {
    double a,b;
    char c;
    while (scanf("%lf %c %lf",&a,&c,&b) != EOF) {
    switch (c) {
        case '+':
            printf("=%lf\n",a+b);
            break;
        case '-':
            printf("=%lf\n",a-b);
            break;
        case '*':
            printf("=%lf\n",a*b);
            break;
        case '/':
            if (b<=1e-9&&b>=-1e-9)
                printf("出错，除数不能为0");
            else
                printf("=%lf 余数为%d\n",a/b,(int)a%(int)b);
            break;
        default:
            break;
    }
    }
    return 0;
}
