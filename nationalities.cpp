#include "nationalities.h"

nationalities::nationalities()
{

}

nationalities::~nationalities()
{

}

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

static struct genericNatInfo nationalityInformation [8];

void establishNatInfo()
{
    /*     BRAZIL INFO     */
    nationalityInformation[0].name              = "Brazil";
    nationalityInformation[0].demonym           = "Brazilian";
    nationalityInformation[0].natID             = 0;
    nationalityInformation[0].mobaPercent       = 40;
    nationalityInformation[0].royalePercent     = 10;
    nationalityInformation[0].shooterPercent    = 35;
    nationalityInformation[0].fighterPercent    = 10;
    nationalityInformation[0].strategyPercent   = 5;
    nationalityInformation[0].genCA             = 55;
    nationalityInformation[0].genCADev          = 25;
    nationalityInformation[0].genPA             = 105;
    nationalityInformation[0].genPADev          = 20;

    /*     CANADA INFO     */
    nationalityInformation[1].name              = "Canada";
    nationalityInformation[1].demonym           = "Canadian";
    nationalityInformation[1].natID             = 1;
    nationalityInformation[1].mobaPercent       = 50;
    nationalityInformation[1].royalePercent     = 5;
    nationalityInformation[1].shooterPercent    = 35;
    nationalityInformation[1].fighterPercent    = 10;
    nationalityInformation[1].strategyPercent   = 5;
    nationalityInformation[1].genCA             = 65;
    nationalityInformation[1].genCADev          = 40;
    nationalityInformation[1].genPA             = 105;
    nationalityInformation[1].genPADev          = 20;

    /*     CHINA INFO     */
    nationalityInformation[2].name              = "China";
    nationalityInformation[2].demonym           = "Chinese";
    nationalityInformation[2].natID             = 2;
    nationalityInformation[2].mobaPercent       = 55;
    nationalityInformation[2].royalePercent     = 15;
    nationalityInformation[2].shooterPercent    = 5;
    nationalityInformation[2].fighterPercent    = 15;
    nationalityInformation[2].strategyPercent   = 10;
    nationalityInformation[2].genCA             = 90;
    nationalityInformation[2].genCADev          = 15;
    nationalityInformation[2].genPA             = 110;
    nationalityInformation[2].genPADev          = 15;

    /*     DENMARK INFO     */
    nationalityInformation[3].name              = "Denmark";
    nationalityInformation[3].demonym           = "Danish";
    nationalityInformation[3].natID             = 3;
    nationalityInformation[3].mobaPercent       = 45;
    nationalityInformation[3].royalePercent     = 5;
    nationalityInformation[3].shooterPercent    = 40;
    nationalityInformation[3].fighterPercent    = 5;
    nationalityInformation[3].strategyPercent   = 5;
    nationalityInformation[3].genCA             = 85;
    nationalityInformation[3].genCADev          = 25;
    nationalityInformation[3].genPA             = 120;
    nationalityInformation[3].genPADev          = 25;

    /*     GERMANY INFO     */
    nationalityInformation[4].name              = "Germany";
    nationalityInformation[4].demonym           = "German";
    nationalityInformation[4].natID             = 4;
    nationalityInformation[4].mobaPercent       = 35;
    nationalityInformation[4].royalePercent     = 10;
    nationalityInformation[4].shooterPercent    = 35;
    nationalityInformation[4].fighterPercent    = 10;
    nationalityInformation[4].strategyPercent   = 10;
    nationalityInformation[4].genCA             = 85;
    nationalityInformation[4].genCADev          = 25;
    nationalityInformation[4].genPA             = 125;
    nationalityInformation[4].genPADev          = 35;

    /*     SOUTH KOREA INFO     */
    nationalityInformation[5].name              = "South Korea";
    nationalityInformation[5].demonym           = "Korean";
    nationalityInformation[5].natID             = 5;
    nationalityInformation[5].mobaPercent       = 40;
    nationalityInformation[5].royalePercent     = 5;
    nationalityInformation[5].shooterPercent    = 5;
    nationalityInformation[5].fighterPercent    = 5;
    nationalityInformation[5].strategyPercent   = 45;
    nationalityInformation[5].genCA             = 100;
    nationalityInformation[5].genCADev          = 15;
    nationalityInformation[5].genPA             = 150;
    nationalityInformation[5].genPADev          = 25;
}


