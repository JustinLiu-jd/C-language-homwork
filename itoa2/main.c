//
//  main.c
//  itoa2
//
//  Created by 刘靖迪 on 2017/4/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
void reverse(char s[]) {
    int c,i,j;
    for (i=0,j = (int)strlen(s)-1 ; i<j; i++,j--) {
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}
void itoa(int n,char s[]) {
    int i,sign;
    i=0;
    sign=n;
    do {
        s[i++]=abs(n%10)+'0';
    }
    while (n/=10);
    if (sign<0) {
        s[i++]='-';
    }
    s[i]='\0';
    reverse(s);
}
int main() {
    char butter[20];
    printf("INT_MIN:%d\n",INT_MIN);
    itoa(INT_MIN, butter);
    printf("butter:%s\n",butter);
    return 0;
}
