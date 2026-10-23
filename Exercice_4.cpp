#include<iostream>
using namespace std;
class Employe {
protected:
   string nom;
   int id;
   double salaireDeBase ;

public:
   Employe(string nom,int id,double salaireDeBase):nom(nom) , id(id),salaireDeBase(salaireDeBase){}
   virtual void afficherInfos(){
    cout<<"Employe [ "<<nom<<" , id "<<id<<" , salaireDeBase "<<salaireDeBase<<" ]\n";
   }
};

class Permanent : public Employe{
private:
    double primeAnnuelle ;
public:
  Permanent(string nom,int id,double salaireDeBase,double primeAnnuelle):Employe(nom,id,salaireDeBase),primeAnnuelle(primeAnnuelle){}
  void afficherInfos() override{
       cout<<"Employe [ "<<nom<<" , id "<<id<<" , salaireDeBase "<<salaireDeBase<<" , primeAnnuelle"<<primeAnnuelle<<" ]\n";
  }
};
class Contractuel : public Employe{
private:
   int dureeContrat ;
   double tauxHoraire ;
public:
   Contractuel(string nom,int id,double salaireDeBase,int dureeContrat,double tauxHoraire):
   Employe(nom,id,salaireDeBase),dureeContrat(dureeContrat),tauxHoraire(tauxHoraire){}
  double calculerSalaireMensuel(int heures){
    return heures * tauxHoraire;
  }

};

int main(){

      Employe* e[] = {
                  new Contractuel("mohammed",222,7000,12,200),
                  new Permanent("en-nassiry",444,6000,100),
                  new Permanent("hamza",111,6000,100)
  };

  for (int i = 0; i < 3; i++)
  {
      e[i]->afficherInfos();
  }
  
}