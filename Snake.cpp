#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {
    int x = 10; // 初始位置x坐标
    int y = 5; // 初始位置y坐标
    char direction = 'R'; // 初始移动方向为右

    while (1) {
        system("cls"); // 清空控制台内容

        for (int i = 0; i <= 20; ++i) {
            printf("\n");

            for (int j = 0; j <= 40; ++j) {
                if (i == y && j == x) {
                    printf("■ "); // 打印蛇头部分
                }
                else {
                    printf("  "); // 打印其他地图元素
                }
            }
        }

        switch (direction) {
        case 'W': --y; break; // 上移
        case 'S': ++y; break; // 下移
        case 'A': --x; break; // 左移
        case 'D': ++x; break; // 右移
        }

        Sleep(300); // 设定每次更新间隔时间（单位：ms）

        if (_kbhit()) { // 判断用户按下了任意键
            char keypress = _getch(); // 获取用户输入字符

            if ((keypress == 'w' || keypress == 'W') && direction != 'S') {
                direction = 'W'; // 改变移动方向为上
            }
            else if ((keypress == 's' || keypress == 'S') && direction != 'W') {
                direction = 'S'; // 改变移动方向为下
            }
            else if ((keypress == 'a' || keypress == 'A') && direction != 'D') {
                direction = 'A'; // 改变移动方向为左
            }
            else if ((keypress == 'd' || keypress == 'D') && direction != 'A') {
                direction = 'D'; // 改变移动方向为右
            }
        }
    }
}