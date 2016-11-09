//
//  Login.cpp
//  Project
//
//  Created by Sanjay Soundarajan on 11/8/16.
//  Copyright © 2016 INSERT TEAM NAME HERE. All rights reserved.
//

#include "Login.hpp"

//int stafftype = 0;


string manager [2][3] =
    {
        {"admam","casey","john"},
        {"1234" , "5678","3434"}
    };

string waiter [2][5] =
    {
        {"A","B","C","D","E"},
        {"1","2","3","4","5"}
    };

void login()
{
    int count = 0;
    int stafftype = 0;
    while (stafftype == 0)
    {
        if (count > 3 )
        {
            cout << "3 attempts used:";
            count = 0;
            sleep(5);
        }
        string username;
        string password;
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;
        stafftype = checkusername(username, password);
        count++;
    }
    
    if (stafftype == 1)
    {
        managermodule();
    }
    if (stafftype == 2)
    {
        waitermodule();
    }
}

int checkusername(string username, string password)
{
    for(int i = 0; i <3; i++ )
    {
        if (manager[0][i] == username)
        {
            if (manager[1][i] == password)
            {
                return 1;
            }
        }
    }
    
    for(int i = 0; i <5; i++ )
    {
        if (waiter[0][i] == username)
        {
            if (waiter[1][i] == password)
            {
                return 2;
            }
        }
    }
    
    return 0;
}
