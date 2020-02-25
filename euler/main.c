//
//  main.c
//  euler
//
//  Created by 刘靖迪 on 2017/7/16.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int euler (int n) {
     int ret = n, i, flag=0;
     if (n==1)
         ret = 1;
     else if (n == 0) ret = 0;
     else {
         for (i=2; i <= n; i++) {
             if (n%i==0) {
                 n/=i;
                 flag = 1;
                 while (n%i==0)
                     n/=i;
                 ret = ret / i * (i-1);
             }
         }
         if (flag==0)
             ret --;
     }
     return ret;
}
int main () {
    int n=67;
    printf("%d\n",euler(n));
    return 0;
}
