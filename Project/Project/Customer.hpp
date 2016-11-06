//
//  Customer.hpp
//  Project
//
//  Created by Sanjay Soundarajan on 11/3/16.
//  Copyright © 2016 INSERT TEAM NAME HERE. All rights reserved.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>
#include<string>
#include<iostream>
using namespace std;

/*
 ************************************************************************
 ************************************************************************
 This header file contains an object class for the customer
 
 ************************************************************************
 ************************************************************************
 */

class Customer
{
public:
    
    //Customer(); //customer constructor
    
    /*More variables may be needed to be added here. For now I only
     added 3*/
    
    int drinkItem;//which drink item is customer having?
    int foodItem; //which food item is customer having?
    bool isPayingSeparate; //is customer paying separate?
};



#endif /* Customer_hpp */

