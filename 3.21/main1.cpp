/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
   printf("charㅇㅢ 최솟값 : %6d, charㅇㅢ 최댓값: %6d\n", CHAR_MIN,CHAR_MAX);
   printf("shortㅇㅢ 최솟값 : %6d, shortㅇㅢ 최댓값", SHRT_MIN, SHRT_MAX);
   char cA = 128 ,cB = -129;
   short sA = 32768, sB -32769;
   printf("%d %d\n", cA, cB);
   printf("%d %d\n", sA, sB);
    return 0;
}
