#include <iostream>
using namespace std;
class Compte
{
protected:
    int numero;
    double solde;

public:
    Compte(int numero, double solde) : numero(numero), solde(solde) {}
    void deposer(double mantont)
    {
        if (mantont < 0)
        {
            cout << "le mantont invalide";
        }
        else
        {
            solde += mantont;
            cout << "depot de " << mantont << "solde :" << solde << "\n";
        }
    }
    void retirer(double mantont)
    {
        if (mantont < 0 || mantont > solde)
        {
            cout << "erreur\n";
        }
        else
        {
            solde -= mantont;
            cout << "retire de " << mantont << "solde :" << solde << "\n";
        }
    }
};
class CompteEpargne : public Compte
{
private:
    double tauxInteret;

public:
    CompteEpargne(int numero, double solde, double taux) : Compte(numero, solde), tauxInteret(taux) {}
    double calculerInteret()
    {
        return solde * (1 + tauxInteret);
    }
};
int main()
{

    CompteEpargne c1(1223, 400, 0.2);
    cout << "solde + tauxInteret : " << c1.calculerInteret() << "\n";
    c1.deposer(100);
    c1.retirer(50);
    c1.retirer(500);
    cout << "solde + tauxInteret : " << c1.calculerInteret() << "\n";

    return 0;
}