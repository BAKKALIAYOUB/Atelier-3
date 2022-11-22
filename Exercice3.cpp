#include <iostream>

using namespace std;

class complexe
{
    private:
        int a,b;
    public:
        complexe(int a , int b){
            this->a = a;
            this->b = b;
        }

        void afficher(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }

        void operator ==(complexe c1 ){
            if(c1.a == this->a && c1.b== this->b){
                cout <<"les deux nombre complexe sont egaux"<<endl;
            }
            else{
                cout << "Les deux nombres complexe ne sont pas egaux"<<endl;
            }
        }

        void operator +(complexe t){
            int sommeRe = this->a + t.a;
            int sommeIm = this->b + t.b;

            complexe somme(sommeRe , sommeIm);

            somme.afficher();
        }

        void operator -(complexe t){
            int diffRe = this->a - t.a;
            int diffIm = this->b - t.b;

            complexe diff(diffRe , diffIm);

            diff.afficher();
        }

        void operator *(complexe t ){
            int multiRe = (this->a * t.a) - (this->b * t.b);
            int multiImg = (this->a * t.a) + (this->b * t.b);

            complexe multi(multiRe,multiImg);

            multi.afficher();
        }

};

int main(){

    complexe c1(3,2);
    complexe c2(4,5);
    c1.afficher();
    c1.operator==(c2);
    c1.operator+(c2);
    c1.operator-(c2);
    c1.operator*(c2);

}
