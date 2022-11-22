#include <iostream>

using namespace std;

class Myclass
{
    public:
        Myclass();
        ~Myclass();
};

Myclass::~Myclass(){
    cout << "Ceci est un destructeur"<<endl;

}
Myclass::Myclass(){
    cout << "Ceci est un constructeur"<<endl;
}

int main(){
    Myclass class1;
}
