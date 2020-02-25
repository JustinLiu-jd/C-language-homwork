//
//  main.c
//  4-3(1)(2)
//
//  Created by 刘靖迪 on 2017/4/9.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    if (n<10) {
        int a[n-1];
        for (i=0; i<n; i++) {
            scanf("%d",&a[i]);
        }
        int min = a[0],k=0;
        for (j=1; j<n; j++) {
            if (min <= a[j]) {
                min = min;
            }
            else {
                min = a[j];
                k=j;
            }
        }
        printf("最小值为%d，下标为%d\n",min,k+1);
    }
    return 0;
}
