#include <stdio.h>
#include <windows.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("... WELCOME ...\n");
        Sleep(500); //notes- It pauses the screen for entered amount of milisecond
        system("cls");
        Sleep(500);
        // printf("end line\n");
    }
    // system("pause");
    return 0;
}