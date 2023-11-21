#include <stdio.h>
#include <windows.h>
int main(int argc, char *argv[])
{
    SetConsoleOutputCP(CP_UTF8);
    fflush(stdout);
    int x, y, z;
    x = 4; y = 6; z = 2;
    if (x==4) printf("\n1. x=%d y=%d z=%d\n", x,y,z);
    printf((x==4)?"1. true":"1. false");
    x = 4; y = 6; z = 2;
    if (x != y - z) printf("\n2. x=%d y=%d z=%d\n", x,y,z);
    printf((x != y - z)?"\n2. true":"\n2. false");
    x = 4; y = 6; z = 2;
    if (z=1)printf("\n3. x=%d y=%d z=%d\n", x,y,z);
    x = 4; y = 6; z = 2;
    printf((z=1)?"3. true":"3. false");
    x = 4; y = 6; z = 2;
    if (y)printf("\n4. x=%d y=%d z=%d\n", x,y,z);
    x = 4; y = 6; z = 2;
    printf((y)?"4. true":"4. false");
    fflush(stdin);
    getchar();
    return 0;
}