/******************************************************************************

                  版权所有 (C), 2023-2023，fang

 ******************************************************************************
  文 件 名   : sampl100_1.c
  版 本 号   : 初稿
  作    者   : fang
  生成日期   : 2023/6/21
  最近修改   :
  功能描述   : 
  函数列表   :
  修改历史   :
  1.日    期   : 2023/6/21
    作    者   : fang
    修改内容   : 创建文件

******************************************************************************/


#include<stdio.h>

void component(void)
{
    int i,j,k,count=0;
    printf("\n");
    for(i=1;i<5;i++) { // 以下为三重循环
        for(j=1;j<5;j++) {
            for (k=1;k<5;k++) { // 确保i、j、k三位互不相同
                if (i!=k&&i!=j&&j!=k) {
                    printf("%d,%d,%d\n",i,j,k);
                    count++;
                }
            }
        }
    }
    printf("Total number of 3-digit combinations: %d\n", count);
}



//
// Created by fang on 2023/6/21.
//


******************************
/*另外一种解法--采用递归*/
/*

#include <stdio.h>

int count = 0; // 计数器

void generate(int num, int digits[], int used[]) {
    if (num == 3) { // 递归终止条件
        int i;
        for (i = 0; i < 3; i++) {
            printf("%d ", digits[i]);
        }
        printf("\n");
        count++;
        return;
    }
    int i;
    for (i = 1; i <= 4; i++) {
        if (!used[i]) {
            digits[num] = i;
            used[i] = 1;
            generate(num + 1, digits, used); // 递归调用函数
            used[i] = 0;
        }
    }
}

int main() {
    int digits[3];
    int used[5] = {0};
    generate(0, digits, used);
    printf("Total combinations: %d\n", count);
    return 0;
}

 */