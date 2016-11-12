/*
CreateOrders.cpp
Project

Created by Emilio Calvillo on 11/11/16.
Copyright © 2016 INSERT TEAM NAME HERE. All rights reserved.
*/

#include "CreateOrders.hpp"

void Orders()
{
    string m;
    int i = 1;
    int exit = 0;
    int e;
    int choice;

    while (exit == 0){
//        cout << "Press exit anytime to return to main menu" << endl;

///Load Current Table Numbers

///Select Table
        cout << "Input table number for current order" << endl;
        cin >> table; //Varies depending on how tables are stored
///Load customers??? Unless already linked to tables

        while (i == 1) {
///Select Customer
            cout << "Please input customer number" << endl;
            cin >> customer; //Varies depending on how customers are stored
///Load food and drink menu

///Select food or drink
            cout << "Press 1 for Food, 2 for Drink" << endl;
            cin >> choice;

            switch (choice) {
                case 1 :
//        food
                    cout << "Food" << endl;
///Expand food menu, use switch to add customizing on order, push end result to customer's vector
                    break;
                case 2 :
//        drink
                    cout << "Drink" << endl;
///Expand drink menu, use switch to add customizing on order, push end result to customer's vector
                    break;
                default :
                    break;
            }
            cout << "Are there more customer orders for current table? (Y/N)" << endl;
            cin >> m;
            if (m == 'N'){
                exit = 1;
                i = 0;
            }
        }


    }

/// After ordering and dining
    updateStats();
    splitBills();
}

int customize (){

}
