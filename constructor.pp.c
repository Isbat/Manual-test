#include<iostream>
using namespace std;
class rectangle{
    public:
            rectangle();
            int area();

};
rectangle::rectangle(){
    int height=0;
    int width=0;

}
rectangle::area(){
    return height*width;

}
int main(){
    rectangle ob1;
    cout<<"Area= "<<ob1()<<endl;
    return 0;
}
