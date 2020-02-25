//
//  main.c
//  2--9
//
//  Created by 刘靖迪 on 2017/3/18.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int bitcount(unsigned x)
{
    int i;
    for (i = 0; x != 0; i++) {
        x = x & (x - 1);
    }
    return i;
}
int main()
{
    unsigned x;
    scanf("%d",&x);
    printf("%d",bitcount(x));
    return 0;
}
