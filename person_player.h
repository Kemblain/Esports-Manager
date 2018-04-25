#ifndef PERSON_PLAYER_H
#define PERSON_PLAYER_H
#include <string>

class person_player
{
    public:
        person_player();
        virtual ~person_player();
        std::string to_string();

    protected:

    private:
        unsigned short attributeOne, attributeTwo, attributeThree, attributeFour, attributeFive, attributeSix, attributeSeven, attributeEight, attributeNine, attributeTen,
                            personID, teamID, gameID, roleID, nationality, currentAbility, potentialAbility, reputation, age, dateOfBirth; //Epoch for age and DOB: January 1 1985 = 0, January 2 1985 = 2 etc.
        std::string nameFirst, nameLast, nameMiddle, namePseudo, mediaDescription, biography;
        long salary;

        void generateAttribute();
        void generateAbilities();
        void updateAbility();
        void updateAttributes();
        void generateNationality();
        void generateNames();
        void updateReputation();
};

#endif // PERSON_PLAYER_H
