#include<iostream>
#include<string>
using namespace std;

class protagonist {
public:
  string name;
  double age;
  float powerLvl;
 
  void Character(string newCharacter){
    name = newCharacter;
  }
};

int main(){
    protagonist Damn;
    Damn.name = "Rishabh";
    Damn.age = 18;
    Damn.powerLvl = 10000;
    
    cout<<"My name is "<<Damn.name<<" "<<"and my age is "<<Damn.age<<endl<<"My powerlevel is over "<<Damn.powerLvl<<"+ .";
    return 0;
}