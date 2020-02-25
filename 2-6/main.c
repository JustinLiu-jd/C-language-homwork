//
//  main.c
//  2-6
//
//  Created by 刘靖迪 on 2017/3/18.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
    return (x&~((~(~0<<n))<<(p-n+1))) | (y&~(~0<<n)<<(p+1-n));
}
int main()
{
    unsigned x,y;
    int p,n;
    scanf("%d%d%d%d",&x,&p,&n,&y);
    printf("%d",setbits(x, p, n, y));
    return 0;
}
