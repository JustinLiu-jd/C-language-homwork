//
//  main.c
//  2-10
//
//  Created by 刘靖迪 on 2017/3/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int lower(int c)
{
    return ( c>= 'A' && c <= 'Z')?(c - 'A' + 'a'):c;
}
