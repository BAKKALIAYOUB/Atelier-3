#include <iostream>

using namespace std;

class Shape 
{
    
    public:
        float longeur, hauteur;
        Shape(float longe , float haut){
            this->hauteur = haut;
            this->longeur = longe;
        }

};

class rectangle : public Shape{
    public:
        rectangle(float x , float y):Shape(x,y){}
        float area()
        {
            return (longeur*hauteur);
        }
};

class triangle : public Shape{
    public:
        triangle( float x, float y):Shape(x,y){}
        float area(){
            return (longeur * hauteur)/2;
        }

};

int main(){
    triangle t(3,4);
    rectangle r(5,7);

    cout <<"Area de rectangle est :"<<t.area()<<endl;
    cout <<"Area de triangle est :"<<r.area()<<endl;

}
