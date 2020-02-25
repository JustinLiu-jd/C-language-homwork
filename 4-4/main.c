//
//  main.c
//  4-4
//
//  Created by 刘靖迪 on 2017/4/9.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n<10) {
        int a[n-1];
        for (int i=0; i<n; i++) {
            scanf("%d",&a[i]);
        }
        for (int m=0; m<n; m++) {
            int min =a[m],k=m,b=0;
            for (int j=m; j<n; j++) {
                if (min <= a[j]) {
                    min = min;
                }
                else {
                    min = a[j];
                    k=j;
                }
            }
        b=a[k]; a[k] = a[m]; a[m] =b;
        }
        for (int x=0; x<n; x++) {
            printf("%d ",a[x]);
        }
        printf("\n");
    }
    return 0;
}
