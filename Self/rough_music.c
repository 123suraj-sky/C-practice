#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <MMsystem.h>

int main()
{
    PlaySound(TEXT("C:\\Users\\Dell\\Desktop\\Practice\\Self\\song.wav"), NULL, SND_SYNC);
    return 0;
}
// //

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <windows.h>

// int main(){
//     char phrase[100] = "Hello World";
//     char charCommandLine[100];

//     strcpy(charCommandLine, "espeak \"");
//     strcat(charCommandLine, phrase);
//     strcat(charCommandLine, "\"");

//     system(charCommandLine);

//     return 0;
// }