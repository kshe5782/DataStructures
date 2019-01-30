//
//  Controller.cpp
//  DataStructures
//
//  Created by Shepherd, Kayden on 1/28/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Welcome to AstroWorld" << endl;
    
}

void Controller :: usingNodes()
{
    Node<int> mine(5);
    Node<String> wordHolder("blah blah blah");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("blah blah");
    cout << wordHolder.getData() << endl;
    
}
