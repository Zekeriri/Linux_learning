#include "process.h" 

int main()
{
    int rate=0;
    while(rate<=100)
    {
        process_v2(rate++);
        usleep(12345);
    }
    printf("\n");
    return 0;
}
