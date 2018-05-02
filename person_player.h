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
        void establishNatInfo();
        void buildPlayerInfo();                 // Completely random player generation
        void buildPlayerInfo(int nationality);  // Player generation with a specific nationality

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

        /* NATIONALITY INFORMATION */
        const int NUMBER_OF_NATIONS = 8;
        struct genericNatInfo
        {
            std::string name;
            std::string demonym;
            short natID;
            short mobaPercent;
            short royalePercent;
            short shooterPercent;
            short fighterPercent;
            short strategyPercent;
            short genCA;
            short genCADev;
            short genPA;
            short genPADev;
        };
        static struct genericNatInfo nationalityInformation [NUMBER_OF_NATIONS];
};

#endif // PERSON_PLAYER_H
