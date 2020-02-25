//
//  main.c
//  4-3(3)
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
        int b=a[k];
        a[k]=a[0];
        a[0]=b;
        for (int c=0; c<n; c++) {
            printf("%d ",a[c]);
        }
        printf("\n");
    }
    return 0;
}
