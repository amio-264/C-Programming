#include <stdio.h>
void checkWeather(int temp);
int main()
{
    int temp;
    printf("Enter the temperature: ");
    scanf("%d", &temp);
    //call the function to check the weather
    checkWeather(temp);
    return 0;
}
//function to check if the weather is hot or cold
void checkWeather(int temp){
    if(temp>=30){
        printf("Hot weather\n");
    }
    else{
        printf("Cold weather\n");
    }
}