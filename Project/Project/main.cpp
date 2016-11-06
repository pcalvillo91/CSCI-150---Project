//
//  main.cpp
//  CSCI 150 - Project
//
//  Created by Sanjay Soundarajan on 10/18/16.
//  Copyright © 2016 //INSERT TEAM NAME HERE. All rights reserved.
//

#include <iostream>
#include "Customer.hpp"
#include "SLL.hpp"
#include "Table.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
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
    return 0;
}
