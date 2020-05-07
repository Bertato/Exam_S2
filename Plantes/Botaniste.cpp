#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP
#include "Botaniste.h"

int Botaniste::getArgent()
{
    return _argent;
}

std::vector<Plante*> Botaniste::GetJardin()
{
    return _jardin;
}

void Botaniste:: Nuit()
{
    for(int i=0; i< _jardin.size(); i++){
        _jardin[i] -> nuit();
    }
}


Botaniste::Botaniste (int argent, std::vector<Plante*> jardin) : _argent(argent), _jardin(jardin) {};

#endif