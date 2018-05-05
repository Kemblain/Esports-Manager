#include <string>
#include <iostream>
#include <random>
#include <time.h>

class person_player
{
    public:
        person_player();
        std::string to_string();
        int getAge(int currentDate);
        static void establishNatInfo();
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
        static const int NUMBER_OF_NATIONS;
        static genericNatInfo nationalityInformation[];
};
