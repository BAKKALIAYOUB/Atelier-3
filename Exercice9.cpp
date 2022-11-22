#include <iostream>

using namespace std;

class T
{
    public:
        static int i;
        void call(){
            i++;
        }
};

int T::i =0;

int main(){

    cout <<"La fonction call a été appelé"<<T::i<<"fois";

    T t;
    t.call();
    t.call();
    t.call();
    t.call();

    cout <<"La fonction call a été appelé"<<T::i<<"fois";

}