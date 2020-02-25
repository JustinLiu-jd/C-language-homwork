//
//  main.c
//  3-3
//
//  Created by 刘靖迪 on 2017/4/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

void expand(char s1[],char s2[]) {
    char c;
    int i=0,j=0;
    while ((c=s1[i++])!='\0') {
        if (s1[i]=='-' && s1[i+1] >= c) {
            i++;
            while (c < s1[i]) {
                s2[j++]=c++;
            }
        }
        else
            s2[j++]=c;
    }
    s2[j]='\0';
}

int main() {
    char s1[]={"a-z"},s2[1000];
    expand (s1,s2);
    printf("%s\n",s2);
    return 0;
}
