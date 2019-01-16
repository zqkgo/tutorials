#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("主进程：%d\n", getpid());
    // 总共创建8个进程
    int p1 = fork(); // 主进程创建一个p1进程
    if (p1 != 0)
    {
        printf("p1进程：%d \n", p1);
    }
    int p2 = fork(); // 主进程和p1进程各创建一个p2
    if (p1 != 0 && p2 != 0)
    {
        // 主进程
        printf("主进程创建的p2进程：%d\n", p2);
    }
    else if (p1 == 0 && p2 != 0)
    {
        // p1进程
        printf("p1进程创建的p2进程：%d\n", p2);
    }
    int p3 = fork(); // 主进程，p1进程，两个p2进程，各创建一个p3进程
    if (p1 != 0 && p2 != 0 && p3 != 0)
    {
        // 主进程
        printf("主进程创建的p3进程：%d\n", p3);
    }
    else if (p1 == 0 && p2 != 0 && p3 != 0)
    {
        // p1进程
        printf("p1进程创建的p3进程：%d\n", p3);
    }
    else if (p2 == 0 && p3 != 0)
    {
        // p2进程
        printf("p2进程创建的p3进程：%d\n", p3);
    }
    usleep(500000);
}