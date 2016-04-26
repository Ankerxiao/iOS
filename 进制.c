//
//  main.c
//  1.进制
//
//  Created by qianfeng on 16/4/26.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

/*
 进制：进位方式
 十进制：10个基本状态，0-9，逢十进一，权值10^(n-1)
 123 = 1*100 + 2*10 + 3
 
 二进制：2个基本状态，0-1，逢二进一，权值2^(n-1)
 前缀：0b
 0b1011 = 1*2^3 + 1*2^1 + 1*2^0 = 11
 
 0b000~0b111 3位二进制，一共可以表达8个不同的数
 
 进制可以相互转换
 二进制->十进制：权值相加
 十进制->二进制：除2取余，商为零结束
   22 = 0b10110 = 2^4 + 2^2 + 2^1 = 16 + 4 + 2
   商   余数
   11   0
   5    1
   2    1
   1    0
   0    1（结束：商为零）
 
  
   86 = 0b1010110
   商   余数
   43   0
   21   1
   10   1
   5    0
   2    1
   1    0 
   0    1
 
 二进制：计算机的世界，二进制最稳定，易于制造，易于存储
 烽火通信
 八卦
 
 八进制和十六进制：是二进制的辅助进制，可以快速转换
 八进制：8个基本状态，0-7，逢八进一，权值8^(n-1)
 前缀：0
 0123 = 1*8^2 + 2*8 + 3 = 83
 八进制转二进制：每位八进制数展开成(拉伸)三位二进制数
 0123 = 0b1010011
 二进制转八进制：每三位二进制数压缩成一位八进制数
 0b1,010,011 = 0123
 
 十六进制：16个基本状态，0-9，A-F，逢十六进一，权值16^(n-1)
 前缀：0x
 0x1a = 1*16 + 10 = 26
 十六进制转二进制：一位拉伸成四位
 0x1a = 0b0001,1010
 二进制转十六进制：四位压缩成四位
 0b1，1010 = 0x1a
 
 转换顺序，十进制->十六进制->二进制
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    printf("My number1 is %d\n",0b1010011);
    //%d:打印十进制的整数
    
    printf("My number2 is 0%o\n",0b1010011);
    //%o:打印八进制的整数，要手动加前缀
    
    printf("My number3 is 0x%x\n",0b1010011);
    //%x:打印十六进制的整数，要手动加前缀
    
    
    printf("Hello, World!\n");
    return 0;
}





