#include <iostream>

int main()
{
    static unsigned char A;
    A = 255;

    do
    {
        A++;
    }
    while(A != 0);
}