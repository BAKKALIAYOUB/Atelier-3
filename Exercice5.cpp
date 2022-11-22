#include <iostream>

using namespace std;

class Animal
{
    public:
        int age;
        string Nom;
        Animal(int a , string n){
            this->age=a;
            this->Nom=n;
        }
        void set_Value(int age , string nom){
            this->age = age;
            this->Nom = nom;
        }
};

class Zebra : public Animal
{
public:
    Zebra(int aZ , string nZ):Animal(aZ , nZ){};
    void afficgerInfo(){
        cout<<"Nom :"<<age<<endl;
        cout<<"Age :"<<Nom<<endl;
    }
};

class Dolphin : public Animal
{
public:
    Dolphin(int aZ , string nZ):Animal(aZ , nZ){};
    void afficgerInfo(){
        cout<<"Nom :"<<age<<endl;
        cout<<"Age :"<<Nom<<endl;
    }
    
};
int main(){
    Zebra z(70 , "aaaa");
    Dolphin d(12 ,"bbbb");

    z.afficgerInfo();
    d.afficgerInfo();
}
