#include "person_player.h"
#include <string>
#include <iostream>
#include <random>
#include <time.h>


person_player::person_player()
{
    //ctor
}

person_player::~person_player()
{
    //dtor
}

void person_player::generateNationality()
{
    int randomNum;
    srand(time(NULL));

    randomNum = rand() % 100000;
    randomNum = randConvert(randomNum);
    nationality = nationalities[randomNum][0];
}

int randConvert(int inputNumber)
{
    if (inputNumber < 9999)
        return 0; // Brazil
    else if (inputNumber < 14999)
        return 1; // Canada
    else if (inputNumber < 29999)
        return 2; // China
    else if (inputNumber < 39999)
        return 3; // Denmark
    else if (inputNumber < 44999)
        return 4; // Germany
    else if (inputNumber < 69999)
        return 5; // South Korea
    else if (inputNumber < 74999)
        return 6; // Sweden
    else
        return 7; // USA
}
