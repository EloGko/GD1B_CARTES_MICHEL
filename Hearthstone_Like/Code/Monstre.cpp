#include "Monstre.h"
#include <string>
#include <iostream>


Monstre::Monstre( std::string nom, int pdv, int atk) : nom(nom), pdv(pdv), atk(atk), dispo(true){}


//-----------------------------------------------------------------------


std::string Monstre::getNom()
{
    return nom;
}


//-----------------------------------------------------------------------


int Monstre::getPdv()
{
    return pdv;
}


//-----------------------------------------------------------------------


int Monstre::getAtk()
{
    return atk;
}

//-----------------------------------------------------------------------

bool Monstre::getDispo()
{
    return dispo;
}


//-----------------------------------------------------------------------


void Monstre::attaquer(int atkAdverse)
{
    pdv = pdv - atkAdverse;
    dispo = false;
}


//-----------------------------------------------------------------------


void Monstre::afficher()
{
    std::cout << nom << " à " << atk << " points d'attaque et il lui reste " << pdv << " points de vie." << std::endl;
    if (dispo)
    {
        std::cout << nom << " peut encore attaquer pour ce tour." << std::endl;
    }
    else
    {
        std::cout << nom << " ne peut pas attaquer pour ce tour." << std::endl;
    }
}


//-----------------------------------------------------------------------


/*
void Monstre::deadOrAlive()
{
    if ( int .getPdv <= 0 )
    {
        std::cout << nom << " est mort." << std::endl;
    }
}
*/