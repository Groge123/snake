#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {
    int x = 10; // ��ʼλ��x����
    int y = 5; // ��ʼλ��y����
    char direction = 'R'; // ��ʼ�ƶ�����Ϊ��

    while (1) {
        system("cls"); // ��տ���̨����

        for (int i = 0; i <= 20; ++i) {
            printf("\n");

            for (int j = 0; j <= 40; ++j) {
                if (i == y && j == x) {
                    printf("�� "); // ��ӡ��ͷ����
                }
                else {
                    printf("  "); // ��ӡ������ͼԪ��
                }
            }
        }

        switch (direction) {
        case 'W': --y; break; // ����
        case 'S': ++y; break; // ����
        case 'A': --x; break; // ����
        case 'D': ++x; break; // ����
        }

        Sleep(300); // �趨ÿ�θ��¼��ʱ�䣨��λ��ms��

        if (_kbhit()) { // �ж��û������������
            char keypress = _getch(); // ��ȡ�û������ַ�

            if ((keypress == 'w' || keypress == 'W') && direction != 'S') {
                direction = 'W'; // �ı��ƶ�����Ϊ��
            }
            else if ((keypress == 's' || keypress == 'S') && direction != 'W') {
                direction = 'S'; // �ı��ƶ�����Ϊ��
            }
            else if ((keypress == 'a' || keypress == 'A') && direction != 'D') {
                direction = 'A'; // �ı��ƶ�����Ϊ��
            }
            else if ((keypress == 'd' || keypress == 'D') && direction != 'A') {
                direction = 'D'; // �ı��ƶ�����Ϊ��
            }
        }
    }
}