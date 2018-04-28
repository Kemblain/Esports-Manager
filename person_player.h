#ifndef PERSON_PLAYER_H
#define PERSON_PLAYER_H
#include <string>

class person_player
{
    public:
        person_player();
        virtual ~person_player();
        std::string to_string();
        int getAge(int currentDate);

    protected:

    private:
        unsigned short attributeOne, attributeTwo, attributeThree, attributeFour, attributeFive, attributeSix, attributeSeven, attributeEight, attributeNine, attributeTen,
                            personID, teamID, gameID, roleID, nationality, currentAbility, potentialAbility, reputation, dateOfBirth; //Epoch for age and DOB: January 1 1985 = 0, January 2 1985 = 2 etc.
        std::string nameFirst, nameLast, nameMiddle, namePseudo, mediaDescription, biography;
        long salary;
        bool isMale;

        void generateAttributes();
        void generateAbilities();
        void generateNationality();
        void generateNames();
        void generateReputation();

        void updateAbility();
        void updateAttributes();
        void updateReputation();

        int randConvert(int inputNumber);
};

#endif // PERSON_PLAYER_H
