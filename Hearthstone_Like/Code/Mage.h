#include <string>
#include "Monstre.cpp"

class Mage{
    private:
        std::string board [6];
        std::string nom;
        int pdv;
    public:
        Mage(std::string nom, int pv);
        std::string getNom();
        int getPdv();
        void nouveauMonstre();
        void atkMonstre();
        void atkHero();
        void afficher();
};