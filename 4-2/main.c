//
//  main.c
//  4-2
//
//  Created by 刘靖迪 on 2017/4/9.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main() {
    int a[5],x;
    for (int i=0; i<5; i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for (int j=0; j<5; j++) {
        if (a[j]==x) {
            printf("%d\n",j+1);
        }
    }
        if (a[0]!=x && a[1]!=x && a[2]!=x && a[3]!=x && a[4]!=x) {
            printf("Not Found\n");
        }
    return 0;
}
