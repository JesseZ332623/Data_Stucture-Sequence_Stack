/*Stack_Function.c*/

/*Create by Jesse_EC on 2023.3.14*/
/*Copyright © 2023 Jesse_EC All rights reserved.*/

#include "Stack_Function.h"

/*功能 01）初始化栈*/
bool Init_Stack(_Sq_Stack_ *new_stack)
{
    new_stack->top_index = -1; /*将栈顶索引设置为-1，即为空栈*/

    return true;
}

/*功能 02）获得栈的长度*/
int Get_Stack_Length(_Sq_Stack_ stack)
{
    return (stack.top_index) + 1;
}

/*功能 03）判断栈是否为空*/
bool Empty_Stack(_Sq_Stack_ stack)
{
    if (stack.top_index == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*功能 04）入栈*/
bool Push_Stack(_Sq_Stack_ *stack, Element_Type *data)
{
    if (stack->top_index == MAX_SIZE - 1)
    {
        fprintf(stderr, "This is a full sequence_stack..............\n");

        return false;
    }
    else
    {
        stack->top_index++;
        stack->data[stack->top_index] = *data;

        return true;
    }
}

/*功能 05）出栈*/
bool Pop_Stack(_Sq_Stack_ *stack, Element_Type *data)
{
    if (stack->top_index == -1)
    {
        fprintf(stderr, "This is an Empty_Stack...........\n");

        return false;
    }
    else
    {
        *data = stack->data[stack->top_index];
        stack->top_index--;

        return true;
    }
}

/*功能 06）获取栈顶元素（不出栈）*/
bool Get_Top_Element(_Sq_Stack_ stack, Element_Type *data)
{
    if (stack.top_index == -1)
    {
        fprintf(stderr, "This is an Empty_Stack\nNo top element here.....\n");

        return false;
    }
    else
    {
        *data = stack.data[stack.top_index];

        return true;
    }
}

/*功能 07）遍历并输出栈的所有元素*/
bool Print_Stack_Element(_Sq_Stack_ stack)
{
    int element_number = 0;

    if (stack.top_index == -1)
    {
        fprintf(stderr, "This is an Empty_Stack...........\n");

        return false;
    }
    while(stack.top_index != -1)
    {
        ++element_number;
        printf("The No.[%d] element from the top of stack is:[%.2lf]\n",
        element_number,
        stack.data[stack.top_index]);
        stack.top_index--;
    }

    return true;
}

/*功能 08）清空栈*/
bool Clear_Stack(_Sq_Stack_ *stack)
{
    stack->top_index = -1; /*将栈顶索引设置为-1，即为空栈*/

    return true;
}
