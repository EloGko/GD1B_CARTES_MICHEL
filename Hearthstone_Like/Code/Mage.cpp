#include <string>
#include "Mage.h"


Mage::Mage(std::string nom, int pdv) : nom(nom), pdv(pdv){}


//-----------------------------------------------------------------------


std::string Mage::getNom()
{
    return nom;
}


//-----------------------------------------------------------------------


int Mage::getPdv()
{
    return pdv;
}

//-----------------------------------------------------------------------


void Mage::nouveauMonstre()
{
    std::string nomMonstre = " ";
    int pdvMonstre = 0;
    int atkMonstre = 0;

    std::cout << "Veuillez rentrer le nom, les points de dégat et les points de vie de votre serviteur.";
    std::cin >> nomMonstre;
    std::cin >> atkMonstre;
    std::cin >> pdvMonstre;
    
    Monstre nouveauMonstre = Monstre(nomMonstre, pdvMonstre, atkMonstre);
}


//-----------------------------------------------------------------------


void Mage::atkMonstre()
{
    int i = 0;
    int j = 0;
    std::cout << "Avec quel serviteur voulez vous attaquer ?";
    std::cin >> i;
    std::cout << "Quel serviteur voulez vous attaquer ?";
    std::cin >> j;

    // boardAdverse[j].attaquer(int board[i].getAtk);
    // board[i].attaquer(int boardAdverse[j].getAtk);
}


//-----------------------------------------------------------------------


void Mage::atkHero()
{
    int k = 0;
    std::cout << "Avec quel serviteur voulez vous attaquer le hero ennemi ?";
    std::cin >> k;
    // pdvHeroEnnemi = board[k].getAtk;
}


//-----------------------------------------------------------------------


void Mage::afficher()
{
    std::cout << "Vous avez " << pdv << " points de vie." << std::endl;
    std::cout << "Plateau :" << std::endl;
    for (int i = 0 ; i < 6 ; i++)
    {
        std::cout << " | ";
        board[i].afficher();
    }
    std::cout << " | ";
}


