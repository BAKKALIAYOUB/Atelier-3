#include <iostream>

using namespace std;

class Personne
{
    protected:
        string Nom , prenom;
        int age;
    public:
        Personne(int age , string Nom , string prenom){
            this->age = age;
            this->Nom = Nom;
            this->prenom = prenom;
        }
        virtual void Afficher(){
            cout<<"Nom:"<<Nom<<endl;
            cout<<"Prenom :"<<prenom<<endl;
            cout<<"Age :"<<age<<endl;
        }
        
};

class Employe : public Personne
{
    protected:
        float salaire;
    public:
        Employe(int ageE ,string nom , string prenom , float salaireE):Personne(ageE , nom , prenom){
            salaire = salaireE;
        }
        void Afficher(){
            
            cout<<"Nom:"<<Nom<<endl;
            cout<<"Prenom :"<<prenom<<endl;
            cout<<"Age :"<<age<<endl;
            cout<<"Salaire :"<<salaire<<endl;
        }
};

class Chef : public Employe
{
    protected:
        string service;
    public:
        Chef(int ageC , string nomC , string prenomC , float salaireC , string serviceC):Employe(ageC,nomC,prenomC,salaireC){
            service = serviceC;
        };
        void Afficher(){
            cout<<"Nom:"<<Nom<<endl;
            cout<<"Prenom :"<<prenom<<endl;
            cout<<"Age :"<<age<<endl;
            cout<<"Salaire :"<<salaire<<endl;
            cout<<"Service :"<<service<<endl;
        }
};

class Directeur : public Chef
{
    protected:
        string societe;
    public:
        Directeur(int ageD ,string nomD, string prenomD,float salaireD,string serviceD,string societeD):Chef(ageD,nomD,prenomD,salaireD,serviceD){
            societe = societeD;
        };
        void Afficher(){
            cout<<"Nom:"<<Nom<<endl;
            cout<<"Prenom :"<<prenom<<endl;
            cout<<"Age :"<<age<<endl;
            cout<<"Salaire :"<<salaire<<endl;
            cout<<"Service :"<<service<<endl;
            cout<<"Societe :"<<societe<<endl;
        }
};

int main(){
    Directeur D1(18,"Ayoub","Bakkali",9000,"jcbvv","aaaaaa");

    D1.Afficher();
}
