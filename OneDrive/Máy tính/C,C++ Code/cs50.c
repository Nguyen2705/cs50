
#include <stdio.h>

int main()
{
    int startSize;

do {
    printf("Start size: ");
    scanf("%d", &startSize) ;
    startSize++;
} while (startSize <= 9);


    int endSize;
do {
    printf("End size: ");
    scanf("%d", &endSize) ;
    endSize++;
} while (endSize < startSize);


    int years = 0;

while (startSize < endSize) {
    int born = startSize / 3;
    int died = startSize / 4;
    startSize = startSize + born - died;
    years++;
}

    printf("Years: %d\n", years);
    

    return 0;
}
