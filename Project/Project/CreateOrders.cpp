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
    string a;
    int i = 1;
    int exit = 0;
    int o, time, custom, b, customer;
    int choice, choicea, choiceb;
    int tablenum;
    Table* p = head;
    int input = 0;
    vector<int> inputvector;

    while (input!= "exit"){
        cout << "Press exit anytime to return to main menu" << endl;
///Select Table
        cout << "Input table number for current order" << endl;
        cin >> tablenum; //Varies depending on how tables are stored

        while ((p->classTableNum) != tablenum)
        {
            p = p->next;
        }

        while (i == 1) {
///Select Customer
            cout << "Please input customer number" << endl;
            cin >> customer; //Varies depending on how customers are stored
            while ((p->Customer[0][customer]).empty()){
                cout << "Incorrect input. Please choose a different number." << endl ;
            }
///Select food or drink
            cout << "Press 1 for Food, 2 for Drink" << endl;
            cin >> choice;
            switch (choice) {
                case 1 : //Food
                    cout << "(1) Lunch (2) Dinner" << endl;
                    cin >> time;
                    switch (time) {
                        case 1 : //Lunch
                        cout << "What food? (1) Burger (2) Cheese burger (3) fries (4) hotdog (5) bacon cheeseburger"
                        cin >> choiceb;
                        switch (choiceb) {
                            case 1 : //Burger
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Ketchup (2) Mustard"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add Ketchup
                                            o = 1111;
                                            break;
                                        case 2 :
                                            //add mustard
                                            o = 1112;
                                            break;
                                    }
                                }
                                o = 111;
                                break;
                            case 2 : //Cheese Burger
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Ketchup (2) Mustard"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add Ketchup
                                            o = 1121;
                                            break;
                                        case 2 :
                                            //add mustard
                                            o = 1122;
                                            break;
                                    }
                                }
                                o = 112;
                                break;
                            case 3 : //Fries
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Ketchup (2) Mustard"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add Ketchup
                                            o = 1131;
                                            break;
                                        case 2 :
                                            //add mustard
                                            o = 1132;
                                            break;
                                    }
                                }
                                o = 113;
                                break;
                            case 4 : //Hotdog
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Ketchup (2) Mustard"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add Ketchup
                                            o = 1141;
                                            break;
                                        case 2 :
                                            //add mustard
                                            o = 1142;
                                            break;
                                    }
                                }
                                o = 114;
                                break;
                            case 5 : //Bacon CheeseBurger
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Ketchup (2) Mustard"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add Ketchup
                                            o = 1151;
                                            break;
                                        case 2 :
                                            //add mustard
                                            o = 1152;
                                            break;
                                    }
                                }
                                o = 115;
                                break;
                            }
                        case 2 : //Dinner
                        cout << "What food? (1) Turkey (2) Chicken (3) Tri-Tip"
                        cin >> choiceb;
                        switch (choiceb) {
                            case 1 : //Turkey
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Ketchup (2) Mustard"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add Ketchup
                                            o = 1211;
                                            break;
                                        case 2 :
                                            //add mustard
                                            o = 1212;
                                            break;
                                    }
                                }
                                o = 121;
                                break;
                            case 2 : //Chicken
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Ketchup (2) Mustard"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add Ketchup
                                            o = 1221;
                                            break;
                                        case 2 :
                                            //add mustard
                                            o = 1222;
                                            break;
                                    }
                                }
                                o = 122;
                                break;
                            case 3 : //Tri-Tip
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Ketchup (2) Mustard"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add Ketchup
                                            o = 1231;
                                            break;
                                        case 2 :
                                            //add mustard
                                            o = 1232;
                                            break;
                                    }
                                }
                                o = 123;
                                break;
                        }
                    }
                    break;
                case 2 : //Drink
                    cout << "What drink? (1) Water (2) Soda"
                    cin >> choiceb;
                    switch (choiceb) {
                        case 1 : //Water
                            cout << "Customize order? (Y/N)" << endl;
                            cin >> b;
                            if (b == 'Y') {
                                cout << "Choose a customization for customer: (1) Lemon (2) No Ice"
                                cin >> custom;
                                switch (custom) {
                                    case 1 :
                                        //add lemon
                                        o = 211;
                                    case 2 :
                                        //No ice
                                        o = 212;
                                }
                            }
                            o = 21;
                            break;
                        case 2 : //Soda
                            cout << "Customize order? (Y/N)" << endl;
                            cin >> b;
                            if (b == 'Y') {
                                cout << "Choose a customization for customer: (1) Extra Large (2) No Ice"
                                cin >> custom;
                                switch (custom) {
                                    case 1 :
                                        //Make large
                                        o = 221;
                                    case 2 :
                                        //No ice
                                        o = 222;
                                }
                            }
                            o = 22;
                            break;
                    }
                default :
                    break;
            }
            cout << "Are there more customer orders for current table? (Y/N)" << endl;
            cin >> m;
            if (m == 'N'){
                i = 0;
                updateStats();
                return;
            }
        }
    }

    while(customer!= 0)
    {
        inputvector.push_back(o);
        cout << "Press 0 to exit" << endl;
        cin >> customer;
    }
    return;
}

