#include <stdio.h>
float convertTemp(float celsius);
int main()
{
    printf("Converted temperature: %f ", convertTemp(37));
    return 0;
}
float convertTemp(float celsius)
{
    float far = celsius * (9.0 / 5.0) + 32.0;
    return far;
}