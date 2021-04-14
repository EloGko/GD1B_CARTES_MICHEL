#include <string>

class Monstre{
    private :
        std::string nom;
        int pdv;
        int atk;
        bool dispo;
    
    public :
        Monstre( std::string nom, int pdv, int atk);
        std::string getNom();
        int getPdv();
        int getAtk();
        bool getDispo();
        void attaquer(int atkAdverse);
        void afficher();
        void deadOrAlive();
};