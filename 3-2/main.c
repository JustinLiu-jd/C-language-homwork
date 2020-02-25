//
//  main.c
//  3-2
//
//  Created by 刘靖迪 on 2017/4/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[1000]={0};
    char b[1000]={0};
    int i=0,j=0,k=0;
    int flag=0;
    for(i=0;a[i]==getchar();i++) {
        if(a[i]==EOF)
        {
            a[i]='\0';
            break;
        }
    }
    for(i=0;a[i]!='\0';i++) {
        switch(flag) {
            case 1:
                j--;
                if(a[i]=='n')
                {b[j]='\n';flag=0;}
                else if(a[i]=='t')
                {b[j]='\t';flag=0;}
                else
                {b[++j]=a[i];flag=0;}
                break;
            default: b[j]=a[i];
                break;
        }
        if(a[i]=='\\') {
            flag=1;
        }
        j++;
    }
    for(k=0;k<j;k++) {
        printf("%c",b[k]);
    }
    return 0;
}
