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
    usingNodes();
}

void Controller :: usingNodes()
{
    Node<int> mine(5);
    Node<string> wordHolder("Astro World Astro World");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("Are you having a good time in Travis Scott's AstroWorld?");
    cout << wordHolder.getData() << endl;
    
}

void Controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}
