//
//  main.c
//  2-8
//
//  Created by 刘靖迪 on 2017/3/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include<stdio.h>

int rightrot(int x,int n)
{
    char s[1000],a[1000];
    int i,j,k,b = 0;
    for (i = 0; x != 0; i++) {
        s[i] = x % 2;
        x = x / 2;
    }
    for (j = n; j <= i - 1; j++) {
        a[j - n] = s[j];
    }
    for (j = 0; j <= n - 1; j++) {
        a[j + i - n] = s[j];
    }
    for (k = i -1; k >= 0; k--) {
        b = 2 * b + a[k];
    }
    return b;
}
int main()
{
    int x = 23,n = 2;
    scanf ("%d%d",&x,&n);
    printf("%d\n",rightrot(x, n));      /*应该输出29*/
    return 0;
}
