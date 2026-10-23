#include <iostream>
#include <string>
using namespace std;

class Personne {
protected:
    string nom;
    int age;
public:
    Personne(string nom, int age) : nom(nom), age(age) {}
    void afficherInfos() const {
        cout << "Nom : " << nom << ", Age : " << age << endl;
    }


};
class Etudiant : public Personne {
private:
    string niveau;
public:
    Etudiant(string nom, int age, string niveau): Personne(nom, age), niveau(niveau) {}
   
    void affiche() const {
        cout << "Nom : " << nom << ", Age : " << age << " , Niveau : " << niveau << endl;
    }
};
int main(){
    Personne p1("mohammed",22);
    p1.afficherInfos();
    Etudiant e1 ("en-nassiry",23,"3eme informatique");
    e1.affiche();
    return 0;
}