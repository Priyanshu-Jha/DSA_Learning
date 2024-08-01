#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    string name;

    void eat(){
        cout<<"eating";
    }
    void sleep(){
        cout<<"Sleeping";
    }
};

int main(){
    //static object creation
    Animal* sample = new Animal;;
    (*sample).age = 33;
    // sample->name="GIraffe";
    cout<<(*sample).age;
    delete sample;
    return 0;
}
