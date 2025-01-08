#include "Card.h"
#include <string>

using namespace std;


/**
* The constructor for a card
*/
Card::Card(){

}

/**
* A getter for the suit of a card
*/
string Card::getSuit(){
    return "";
}

/**
* A getter for the value of a card
*/
string Card::getValue(){
    return "";
}

/**
* A to string method for '{value} of {suit}'
*/
string Card::toString(){
    return "";
}

/**
* A comparison override to compare whether two cards
* have the same suit/value
*/
bool Card::operator==(Card c){
    return false;
}

int main(){
    
    return 0;
}
