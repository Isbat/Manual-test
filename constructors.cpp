#include<iostream>
using namespace std;
class rectangle{
    public:
            int height,width;
            rectangle(int h,int w);
            int area();
            //destructor
            ~rectangle();

};
rectangle::rectangle(int h,int w){
    height=h;
    width=w;
    cout<<"Constructor "<<area()<<endl;


}
rectangle::~rectangle(){
    cout<<"Destructor "<<area()<<endl;


}
rectangle::area(){
    return height*width;

}
int main(){
    rectangle ob1(5,6),ob2(4,5);//constructor parameter
    cout<<"Area= "<<ob1.area()<<endl;
    return 0;
}

