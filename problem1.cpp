#include<iostream>
using namespace std;

class rectangle{
    public:
        //member variable
        int height;
        int width;
        //member function

        /*int area(){
            return height*width;
        } */

        //prototype declear
        int area();
        //constructor
        rectangle();


};
inline int rectangle::area(){//inline function search fast kore
    return height*width;
}
rectangle::rectangle(){

}
int main(){
    rectangle ob1;
    ob1.height=5;
    ob1.width=6;
   // int area=ob1.height*ob1.width;

    cout<<"Area= "<<ob1.area()<<endl;


    return 0;
}
