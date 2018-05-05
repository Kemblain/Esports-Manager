#include <string>
#include <iostream>
#include <random>
#include <time.h>

typedef struct
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
        } genericNatInfo;

class person_player
{


    public:
        static const int NUMBER_OF_NATIONS;
        static genericNatInfo nationalityInformation[];
        person_player();
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
        bool isMale;
        long salary;
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
};
