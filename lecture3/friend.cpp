#include <iostream>
#include "friend.h"

Text::Text(string str){
    strNapis = str;
}

 void wypisz(Text* obj){
    cout<< "oto tekst: "<< obj->strNapis<<endl;
 }
