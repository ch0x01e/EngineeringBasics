﻿// DLL.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "DLL.h"


// 这是导出变量的一个示例
DLL_API int nDLL=0;

// 这是导出函数的一个示例。
DLL_API int fnDLL(void)
{
    return 0;
}

// 这是已导出类的构造函数。
CDLL::CDLL()
{
    return;
}
