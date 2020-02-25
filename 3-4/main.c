//
//  main.c
//  3-4
//
//  Created by 刘靖迪 on 2017/4/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

void itoa (int n,char s[])
{
    int sign,i=0;
    if((sign=n)<0)
        n=-n;
    do{
        s[i++]='0'+n%10;        //转成字符
    }
    while ((n/=10)>0);
        if(sign<0)
        s[i++]='-';
    s[i]='\0';
    int j;
    for(j=i;j>=0;j--)
        printf("%c",s[j]);
}


