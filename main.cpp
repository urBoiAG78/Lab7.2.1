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
//add your own exception class here 
//add functions code here
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
//add a suitable catch block here
return 0; }

