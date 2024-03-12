#include <iostream>
using namespace std;

class Figura{
private:
    int b, h;
    float a;

public:
    Figura();
    Figura(int b, int h);
    virtual void setArea(float a);
    virtual float getArea();
};

class Square: public Figura{
    public:
    Square(int l);
    
};
class Rectangle: public Figura{
    public:
    Rectangle(int b, int h);

};
class Triangle: public Figura{
    public:
    Triangle(int b, int h);

};

/*
    Implementa los constructores y funciones de la clase Figura.
    El área NO se debe de asignar en el constructor de Figura, ÚNICAMENTE en el constructor individual de cada figura.
*/

/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Asignar el área del cuadrado.
*/

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Asignar el área del Rectángulo.
*/

/*
    Implementa la clase Triángulo que hereda de Figura.
    Crear constructor de Triángulo que herede del constructor de Figura.
    Asignar el área del Triángulo.
*/

int main () {

    Square s(5);
    cout << s.getArea() << endl; // 25
    Rectangle r(5,5);
    cout << r.getArea() << endl; // 25
    Triangle t(5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}

Figura::Figura(){
    this->b=0;
    this->h=0;
}
Figura::Figura(int b, int h){
    this->b=b;
    this->h=h;
}
void Figura::setArea(float a){
    this->a=a;
}

Square::Square(int l){
    float a=l*l;
    setArea(a);
}
Rectangle::Rectangle(int b, int h){
    float a=h*h;
    setArea(a);
}
Triangle::Triangle(int b, int h){
    float a=(b*h)/2.0;
    setArea(a);
}

float Figura::getArea(){
    return this->a;
}