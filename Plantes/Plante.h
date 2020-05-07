#ifndef PLANTE_H
#define PLANTE_H


class Plante
{
    private:
        int _hydratation;
        int _sante;
        bool _engrais;
        int _tailler;
        int _croissance;
        int _maturite;

        std::string _nom;

    public:
       
        void inspecter ();
        void densite();
        void getEngrais();
        void getTailler();
        void getArroser();
        void grandir();
        void mourir();
        void nuit();

        Plante(); 
        Plante (int hydratation, int sante, bool engrais, int tailler, int croissance,int maturite, std::string nom);
};

#endif