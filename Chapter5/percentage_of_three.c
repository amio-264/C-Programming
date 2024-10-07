#include <stdio.h>
float calcPercentage(float science, float math, float english);
int main()
{
    printf("The percentage is %f", calcPercentage(45, 56, 87));
    return 0;
}
float calcPercentage(float science,float math,float english){
    return ((science + math + english) / 3.0);
}