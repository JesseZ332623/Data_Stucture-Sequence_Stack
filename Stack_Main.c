/*Stack_Main.c*/

/*Create by Jesse_EC on 2023.3.14*/
/*Copyright © 2023 Jesse_EC All rights reserved.*/

#include "Stack_Function.h"
#include <time.h>
#include <windows.h>

int main(int argc, char const *argv[])
{
    system("Color A");

    Element_Type array_data[MAX_SIZE] = {0.0000};                     /*要存入的数据*/
    _Sq_Stack_ *new_stack = (_Sq_Stack_ *)malloc(sizeof(_Sq_Stack_)); /*声明一个指针指向一个栈*/
    srand((unsigned int)time(NULL));                                  /*随机数种子初始化*/
    if (Init_Stack(new_stack) == false)                               /*初始化这个栈，如果没成功就报错并退出进程*/
    {
        fprintf(stderr, "No more memeory to collection......\n");
        exit(EXIT_FAILURE);
    }
    puts("The Sequence stack Initialization succeeded!");

    puts("---------------------------------------------------------------------------------");
    Sleep(1000);
    puts("Write data to the stack:");
    puts("---------------------------------------------------------------------------------");
    for (int index = 0; index < MAX_SIZE; ++index) /*通过循环将生成的随机数写入数组和栈中*/
    {
        array_data[index] = rand() / 45.78980;
        if (Push_Stack(new_stack, &array_data[index]))
        {
            printf("array_data[%d]:[%.2lf] into this stack.\n", index, array_data[index]);
        }
    }
    printf("Now,The Length of this stack is:[%d]\n", Get_Stack_Length(*new_stack));

    puts("---------------------------------------------------------------------------------");
    Sleep(1000);
    puts("Delete data in the stack.");
    puts("---------------------------------------------------------------------------------");
    for (int index = 0; index < 10; ++index) /*进行出栈操作，将栈内前十个数据弹出 （MAX_SIZE ~ MAX_SIZE - 10 - 1）*/
    {
        if (Pop_Stack(new_stack, &array_data[index]))
        {
            printf("array_data[%d]:[%.2lf] OUT....\n", MAX_SIZE - index - 1, array_data[index]);
        }
    }
    printf("Now,The Length of this stack is:[%d]\n", Get_Stack_Length(*new_stack));

    puts("---------------------------------------------------------------------------------");
    Sleep(1000);
    puts("Output stack data.");
    puts("---------------------------------------------------------------------------------");
    printf("Now,The lengths of this stack:[%d]\n", Get_Stack_Length(*new_stack)); /*检测当前栈的长度*/
    Print_Stack_Element(*new_stack);                                              /*遍历并输出栈内的数据*/

    puts("---------------------------------------------------------------------------------");
    Sleep(1000);
    puts("Clear stack and free stack memeoy.");
    puts("---------------------------------------------------------------------------------");
    Clear_Stack(new_stack);                                                              /*完成上述操作之后清空栈*/
    printf("In the end,The lengths of this stack:[%d]\n", Get_Stack_Length(*new_stack)); /*最后再检测一次栈的长度*/
    free(new_stack);                                                                     /*释放栈的内存*/
    puts("Finish.........");
    puts("---------------------------------------------------------------------------------");
    system("Pause");

    return 0; /*Over.........*/
}

/*Date:2023.3.14 Jesse_EC*/

