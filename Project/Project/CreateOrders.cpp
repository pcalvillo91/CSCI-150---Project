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
    int e;
    int choice, choicea, choiceb;

    while (input!= "exit"){
        cout << "Press exit anytime to return to main menu" << endl;
///Load Current Table Numbers

///Select Table
        cout << "Input table number for current order" << endl;
        cin >> table; //Varies depending on how tables are stored
///Load customers??? Unless already linked to tables

        while (i == 1) {
///Select Customer
            cout << "Please input customer number" << endl;
            cin >> customer; //Varies depending on how customers are stored
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
                                    cout << "Choose a customization for customer: (1) Lemon (2) No Ice"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add lemon
                                            break;
                                        case 2 :
                                            //No ice
                                            break;
                                    }
                                }
                                break;
                            case 2 : //Cheese Burger
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Extra Large (2) No Ice"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //Make large
                                            break;
                                        case 2 :
                                            //No ice
                                            break;
                                    }
                                }
                                break;
                            case 3 : //Fries
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Lemon (2) No Ice"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add lemon
                                        case 2 :
                                            //No ice
                                    }
                                }
                                break;
                            case 4 : //Hotdog
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Extra Large (2) No Ice"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //Make large
                                        case 2 :
                                            //No ice
                                    }
                                }
                                break;
                            case 5 : //Bacon CheeseBurger
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Extra Large (2) No Ice"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //Make large
                                        case 2 :
                                            //No ice
                                    }
                                }
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
                                    cout << "Choose a customization for customer: (1) Lemon (2) No Ice"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add lemon
                                        case 2 :
                                            //No ice
                                    }
                                }
                                break;
                            case 2 : //Chicken
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Extra Large (2) No Ice"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //Make large
                                        case 2 :
                                            //No ice
                                    }
                                }
                                break;
                            case 3 : //Tri-Tip
                                cout << "Customize order? (Y/N)" << endl;
                                cin >> b;
                                if (b == 'Y') {
                                    cout << "Choose a customization for customer: (1) Lemon (2) No Ice"
                                    cin >> custom;
                                    switch (custom) {
                                        case 1 :
                                            //add lemon
                                        case 2 :
                                            //No ice
                                    }
                                }
                                break;
                        }
                    }
///Expand food menu, use switch to add customizing on order, push end result to customer's vector
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
                                    case 2 :
                                        //No ice
                                }
                            }
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
                                    case 2 :
                                        //No ice
                                }
                            }
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
    return;
}

