#include<iostream>
using namespace std;

template <typename T, typename V>
class Pair{
  T x;
  V y;

  public:
    void setX(T x){
        this->x = x;
    }

    T getX(){
        return x;
    }

    void setY(V y){
        this->y = y;
    }

    V getY(){
        return y;
    }

};


int main(){

    Pair<int,double> p;

    p.setX(100);
    p.setY(100.98);

    cout<<p.getX()<<" "<<p.getY()<<endl;

    Pair<Pair<int,int>,int> p1;

    Pair<int,int> p2;
    p2.setX(12);
    p2.setY(14);

    p1.setX(p2);
    p1.setY(19);

    cout<<p1.getX().getX()<<" "<<p1.getY()<<endl;


    return 0;
}