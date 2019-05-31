//
//  main.cpp
//  homework17
//
//  Created by 劉世翔 on 2019/5/31.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int a;
    int max = 0;
    printf("請輸入五個數字\n");
    for(a=1;a<=5;a++)
    {
        printf("請輸入第%d個數:\n",a);
        scanf("%d",&num[a]);
    }
    for(a=1;a<=5;a++)
    {
        if(num[a]>max)
        {
            max=num[a];
        }
    }
    printf("最大的數字為%d\n",max);
    return 0;
}
