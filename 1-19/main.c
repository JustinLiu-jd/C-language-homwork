//
//  main.c
//  1-19
//
//  Created by 刘靖迪 on 2017/5/2.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse (char s[]) {
    int c,i,j;
    for (i=0,j=(int)strlen(s)-1; i<j; i++,j--) {
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}
