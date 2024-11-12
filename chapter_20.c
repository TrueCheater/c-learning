#include <stdio.h>

enum Lights{
    RED,
    YELLOW,
    GREEN
};

enum ZIP{
    CITY_1 = 96495,
    CITY_2 = 60351,
    CITY_3 = 40056
} myZip;

int main(void){
    enum MyEnum{
        FIRST,
        SECOND,
        THIRD
    };
    enum MyEnum myEnumVar;
    myEnumVar = SECOND;
    printf("Declared an enum. Setting the value to: %d\n", myEnumVar);

    enum Days{
        WEDNESDAY = 3,
        THURSDAY,
        FRIDAY
    };
    enum Days myDays;
    myDays = FRIDAY;
    printf("Declared an enum Days. Setting the value to: %d\n", myDays);

    enum Days2{
        MONDAY = 1,
        TUESDAY,
        SUNDAY
    } myDays2;
    myDays2 = TUESDAY;
    printf("Declared an enum Days2. Setting the value to: %d\n", myDays2);

    enum Lights myLights;
    myLights = GREEN;
    int x = myLights;
    printf("converting enum to integer, value: %d\n", x);

    myZip = CITY_3;
    printf("Declared an enum ZIP. Setting the value to: %d\n", myZip);
}