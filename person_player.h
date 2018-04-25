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
        unsigned short int attributeOne, attributeTwo, attributeThree, attributeFour, attributeFive, attributeSix, attributeSeven, attributeEight, attributeNine, attributeTen,
                            personID, teamID, nationality, currentAbility, potentialAbility, reputation;
        std::string nameFirst, nameLast, nameMiddle, namePseudo, mediaDescription, biography;
};

#endif // PERSON_PLAYER_H
