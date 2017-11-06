/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on November 3, 2017, 1:58 PM
 */

#include <iostream>
using namespace std;

float square_area(float a){
    try{if(a < 0){
        throw string("Type a number greater than zero my guy");
    }
    if(a>0){
        return a*a;
    }
    

    }catch (string &exc){
        cout<< "Your input is not valid. The area can't be negative." << endl;
}
}
float rectangle_area(float a, float b){
    try{
        if((a*b) < 0){
            throw string("Oops no zeros allowed");
        }
        if((a*b) > 0){
            return a*b;
        }
    }
    catch(string &exc){
       cout<< "Your input is not valid. The area can't be negative." << endl;
    }
}
int main(void) {
    float a, b, r; 
    cin >> a;
    cin >> b;
    try
    {
        float rsquare = square_area(a);
        float rrectangle = rectangle_area(a,b);
        cout << rsquare << endl << rrectangle << endl;
    }
    catch(string &exc){
        cout<< "Your input is not valid. The area can't be negative." << endl;
    }
return 0; 
}

