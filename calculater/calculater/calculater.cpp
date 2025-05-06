// calculater.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <DLL_sub.h>
#include <DLL_add.h>
#include <LIB_mul.h>
using namespace std;

int main()
{
    int add_result = add_fun(1,2);
    int sub_result = sub_fun(1,2);
    int mul_result = mul_fun(1,2);
    cout << "\n sub 1-2=" << sub_result << endl;
    cout << "\n Add 1+2=" << add_result << endl;
    cout << "\n minus 1*2="
        << mul_result << endl;
    return 0;
}

