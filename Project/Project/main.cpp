//
//  main.cpp
//  CSCI 150 - Project
//
//  Created by Sanjay Soundarajan on 10/18/16.
//  Copyright © 2016 //INSERT TEAM NAME HERE. All rights reserved.
//

#include <iostream>
//#include "Customer.hpp"
#include "SLL.hpp"
#include "Table.hpp"
#include "Login.hpp"
#include "Menu.hpp"
#include <stdlib.h>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    string loginusername;
    string loginpassword;
    //Declare object for restaurant tables
    SLL RestTables;
    //How many tables are going to be created?
    int N;
    int i = 0;
    cout << "Please enter how many tables will be created: " << endl;
    cin >> N;
    while(i < N){
        
        RestTables.insertToBack(i);
        i++;
    }
    
    
    RestTables.printAll();
    
    menuPopulate();     // Create the menu data structure
    
    system("CLS");      // Clear screen in windows. Dooesn't work on macs
    login();
    
    return 0;
}
