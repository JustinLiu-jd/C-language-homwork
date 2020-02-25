//
//  main.c
//  3-5
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
void itob(int n,char s[],int b) {
    int i,sign,j;
    i=0;
    sign=n;
    if (n<0) {
        n=-n;
    }
    if (b>=1 ||b<=36) {
        do {
            j=n%b;
            s[i++]=(j<=9)?j+'0':j+'a';
        }
        while (n/=b);
        if (sign <0) {
            s[i++]='-';
        }
        s[i]='\0';
        reverse(s);
    }
}
int main() {
    int a=123456789;
    int b=12;
    char s[100];
    itob(a, s, b);
    printf("%s\n",s);
    return 0;
}
