#include <iostream>
using namespace std;
#pragma once
 string ReadString(string msgToUsr){

    string txt;
    cout << msgToUsr ;
    getline(cin , txt);

    return txt;
}


