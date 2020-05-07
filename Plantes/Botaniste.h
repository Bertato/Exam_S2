#ifndef BOTANISTE_H
#define BOTANISTE_H

class Botaniste
{
    private:

        int _argent;
        std::vector<Plante*> _jardin;

    public:

        int getArgent();
        std::vector<Plante*> getJardin();

        void Nuit();

        Botaniste(); 
        Botaniste(int argent, std::vector<Plante*> jardin);

};