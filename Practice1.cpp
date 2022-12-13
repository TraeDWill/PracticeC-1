#include "practice1.hpp"

char * first(){
    char * woot = new char[SIZE];

    cin.get(woot, SIZE, '\n');
    cin.ignore(1234, '\n');

    cout << "Here's your word, bitch: " << woot << endl;

    return woot;
}