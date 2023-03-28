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
   int a=1 , b=2;
   int temp;
   printf("a:%d, b=%d", a,b);	temp = a;
   a=b;
   b=temp;
   printf("a:%d, b=%d", a,b);
    return 0;
}
