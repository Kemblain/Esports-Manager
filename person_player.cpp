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
