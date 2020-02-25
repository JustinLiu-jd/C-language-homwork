//
//  main.c
//  P37_2-3
//
//  Created by 刘靖迪 on 2017/3/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#define YES 1
#define NO 0
int hoit(char s[])
{
    int a = 0,i = 0,b,n = 0;
    for (b = YES; b == YES; i++) {
        if (s[i] >= '0' && s[i] <= '9' )
            a = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            a = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            a = s[i] - 'A' + 10;
        else b = NO;
        if (b == YES)
            n = 16 * n + a;
    }
    return n;
}
int main()
{
    char s[1000];
    int d;
    scanf("%s",s);
    d = hoit(s);
    printf("%d",d);
    return 0;
}
