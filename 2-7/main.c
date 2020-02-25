//
//  main.c
//  2-7
//
//  Created by 刘靖迪 on 2017/3/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int invert(int x, int p, int n)
{
    char s[1000];
    int i,j,k,a = 0;
    for (i = 0; x != 0; i++) {
        s[i] = x % 2;
        x = x / 2;
    }
    for (j = i - p; j >= i - p - n + 1; j --) {
        if (s[j] == 0)
            s[j] = 1;
        else if(s[j] == 1)
            s[j] = 0;
    }
    for (k = i - 1; k >= 0; k --) {
        a = 2 * a + s[k];
    }
    return a;
}

int main()
{
    int x = 9;
    int y;
    int p = 3;
    int n = 2;
    y = invert(x, p, n);
    printf("%d\n", y);  //y应为10
    return 0;
}
