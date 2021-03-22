#include <iostream>
#include "Artist.h"
#include "Athlete.h"
#include "Person.h"
using namespace std;

int main() {
    Artist boy("Boy Peacemaker", 40, "Pop");
    cout << boy.introduce() << endl;
    cout << boy.playMusic() << endl;


     cout << "------------------" << endl;

    Athlete selena("Selena Williams", 39, "Tennis");
    cout << selena.introduce() << endl;
    cout << selena.playSport() << endl;
    
    
    cout << "------------------" << endl;
    Person F("Chakree Shanpakdee",20);
    cout << F.introduce() << endl;

    Person* people[10];
    people[0]= new Person("A", 123);
    people[1]= new Artist("B", 48, "ROCK";
    people[2]= new Athlete("C", 18, "Table tennis");

    for (int i=0; i< 3; ++i){
        Person* = people[i];
        count << "[" +    << i << "]" << p -> introduce() <<endl;
    }
}