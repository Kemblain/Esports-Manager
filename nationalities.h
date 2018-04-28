#ifndef NATIONALITIES_H
#define NATIONALITIES_H
#include <string>


class nationalities
{
    public:
        nationalities();
        virtual ~nationalities();
        static struct genericNatInfo nationalityInformation [8];
        void establishNatInfo();

    protected:

    private:
        struct genericNatInfo
        {
            std::string name;
            std::string demonym;
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
};

#endif // NATIONALITIES_H
