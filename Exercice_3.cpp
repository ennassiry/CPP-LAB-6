#include <iostream>
using namespace std;
class Produit
{
protected:
    string nom;
    double prix;

public:
    Produit(string nom, double prix) : nom(nom), prix(prix) {}
    virtual void afficherInfos()
    {
        cout << "nom de produit : " << nom << "prix " << prix << "\n";
    }
};
class ProduitAlimentaire : public Produit
{
    string dateExpiration;
public:
    ProduitAlimentaire(string nom, double prix, string dateExpiration) : Produit(nom, prix), dateExpiration(dateExpiration) {}
    void afficherInfos() override
    {
        cout << "nom de produit : " << nom <<" , "<< "prix " << prix <<" Dh , "<< "dateExpiration " << dateExpiration << "\n";
    }
};

class ProduitElectronique  : public Produit
{
    string garantie;
public:
    ProduitElectronique (string nom, double prix, string garantie) : Produit(nom, prix), garantie(garantie) {}
    void afficherInfos() override
    {
        cout << "nom de produit : " << nom <<" , "<< "prix " <<prix<<" DH ,  garantie " << garantie << "\n";
    }
};
int main(){
    ProduitAlimentaire p1("lait",5,"2026/11/23");
    ProduitElectronique p2("phone",5,"6 mois");

    p1.afficherInfos();
    p2.afficherInfos();
    return 0;
}