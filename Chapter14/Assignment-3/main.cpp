#include "Assignment.hpp"

using namespace std;

int main(){
Square s1;
Rectangle r1;

s1.setWidth(10);

r1 = r1.makeRectanglewithSquare(s1); //get Width from Square

cout<<"Width: " << r1.getWidth()<<endl;  //Width from Square (10)
cout<<"Height: "<< r1.getHeight()<<endl; //default height from constructor (20)
cout<<"Area: "  << r1.getArea()<<endl;
}