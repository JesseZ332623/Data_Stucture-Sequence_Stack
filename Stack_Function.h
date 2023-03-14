/*Stack_Function.h*/

/*Create by Jesse_EC on 2023.3.14*/
/*Copyright © 2023 Jesse_EC All rights reserved.*/

#ifndef _Stack_Function_
#define _Stack_Function_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 25 /*声明一个栈的最大数据长度为25*/

typedef double Element_Type; /*栈内的元素为 double类型*/

typedef struct Sequence_Stack /*栈的存储结构*/
{
    Element_Type data[MAX_SIZE]; /*栈数据*/
    int top_index;               /*栈顶下标索引*/
} _Sq_Stack_;

/*功能 01）初始化栈*/
bool Init_Stack(_Sq_Stack_ *new_stack);

/*功能 02）获得栈的长度*/
int Get_Stack_Length(_Sq_Stack_ stack);

/*功能 03）判断栈是否为空*/
bool Empty_Stack(_Sq_Stack_ stack);

/*功能 04）入栈*/
bool Push_Stack(_Sq_Stack_ *stack, Element_Type *data);

/*功能 05）出栈*/
bool Pop_Stack(_Sq_Stack_ *stack, Element_Type *data);

/*功能 06）获取栈顶元素（不出栈）*/
bool Get_Top_Element(_Sq_Stack_ stack, Element_Type *data);

/*功能 07）遍历并输出栈的所有元素*/
bool Print_Stack_Element(_Sq_Stack_ stack);

/*功能 08）清空栈*/
bool Clear_Stack(_Sq_Stack_ *stack);

#endif