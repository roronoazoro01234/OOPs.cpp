// Encapsulation //

#include<iostream>
#include<string>
using namespace std;

class protagonist {
private:
float powerLvl;
public:
  string name;
  double age;
  
};

int main(){
    protagonist Damn;
    Damn.name = "Rishabh";
    Damn.age = 18;
   
    cout<<"My name is "<<Damn.name<<" "<<"and my age is "<<Damn.age<<endl;
    return 0;
}