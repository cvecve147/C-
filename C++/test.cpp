#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    while (1)
    {
        int x = 30, flag = 1;
        while (x > 0)
        {
            cout << "Green! " << x;
            Sleep(1000);
            system("CLS");
            if (kbhit() && flag ) {getch(); x -= 10; flag = 0;}
            --x;
        }
        
        for (int n=30; n>0; n--)
        {
            cout << "Red! " << n;
            Sleep(1000);
            system("CLS");
        }
        
        while (kbhit()) getch(); 
    }
    return 0;
}
