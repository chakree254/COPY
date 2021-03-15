#include <iostream>
#include "Person.h"
#include <string>


using namespace std;



   Person::Person(std::string name, int age) {
      this->name = name;
      this->age = age;
   }
   std::string Person::introduce(){
       std::string message = "My name is " + name + ". ";
        message += "I'm " + std::to_string(age) + " years old.";
        return message;
   }

   std::string Person::getName(){
      return name;
   }

