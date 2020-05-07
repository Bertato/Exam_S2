#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include <string>
#include "Plante.h"

//L'engrais fait grandir
void Plante :: getEngrais ()
{   
    std::cout<<"Vous ajoutez de l'engrais"<<std::endl;
    _engrais = true;
    _croissance ++;
}

//La plante pousse au fur et à mesure
void Plante :: densite()
{
    _tailler --;
    if(_tailler < 0) _tailler =0;
    if(_tailler == 2) _sante --;
}

//On taille la plante
void Plante :: getTailler ()
{
     std::cout<<"Vous taillez la Plante"<<std::endl;
    _tailler ++;
    if(_tailler > 10) _tailler = 10;
    if(_tailler == 10) _sante --;
}

// On arrose la plante 
void Plante :: getArroser ()
{
     std::cout<<"Vous arrosez la Plante"<<std::endl;
    _hydratation ++;
    if(_hydratation > 10) _hydratation = 10;
    if(_hydratation == 8) _sante --;
}

//La plante grandie dès que la croissance est a 3
void Plante :: grandir ()
{
    if(_croissance ==3) _croissance =0;
    if(_croissance ==3) _tailler --;
}
//La plante meurt quand elle n'a plus de santé
void Plante :: mourir ()
{
    if (_sante < 0) _sante =0;
    std::cout<<"Votre plante est morte..."<< std::endl;
}

void Plante :: nuit()
{
    
    _hydratation -= 2;
    if(_engrais == true) _maturite += 2;
    if(_engrais == false) _maturite += 1;
    
    _engrais = false;

    std::cout<<"La nuit passe et vous retrouvez votre plante le lendemain."<< std::endl;
    std::cout<<"Le niveau d'hydratation de cette plante est de "<<_hydratation<<std::endl;
    std::cout<<"La sante de cette plante est de "<<_sante<<std::endl;

}



//Inspecter la plante 
void Plante :: inspecter ()
{
    std::cout<<"Le nom de cette espece est "<<_nom<<std::endl;
    std::cout<<"Le niveau d'hydratation de cette plante est de "<<_hydratation<<std::endl;
    std::cout<<"La sante de cette plante est de "<<_sante<<std::endl;
}


Plante :: Plante () : _hydratation(0),_sante(0),_engrais(false),_tailler(0), _croissance(0), _maturite(0), _nom("rien") {};
Plante :: Plante (int hydratation,int sante,bool engrais,int tailler, int croissance, int maturite, std::string nom):_hydratation(hydratation),_sante(sante),_engrais(engrais),_tailler(tailler), _nom(nom) {};

#endif