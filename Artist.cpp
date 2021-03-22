#include "Artist.h"
#include <string>

Artist::Artist(std::string name, int age, std::string genre)
    : Person(name,age) {
    this->genre = genre;
}

std::string Artist::playMusic(){
    return getName() + " is playing " + genre + " music.";//getname() 's Artist
}

std::string Artist::introduce(){
    return Person::introduce() + "\n" + playmusic();
}

