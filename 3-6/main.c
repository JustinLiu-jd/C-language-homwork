//
//  main.c
//  3-6
//
//  Created by 刘靖迪 on 2017/5/1.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char s[]) {
    int c,i,j;
    for (i=0,j=(int)strlen(s)-1; i<j; i++,j--) {
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}
void itoa(int n,char s[],int width) {
    int i,sign;
    i=0;
    sign=n;
    if (sign<0) {
        n=-n;
    }
    do {
        s[i++]=n%10+'0';
    }
    while (n/=10);
    if (sign<0) {
        s[i++]='-';
    }
    while (i<width) {
        s[i++]=' ';
    }
    s[i]='\0';
    reverse(s);
}
int main(void) {
    char buffer[20];
    int n=123;
    itoa(n, buffer, 7);
    printf("Buffer:%s\n", buffer);
    
    return 0;
}
