//
//  Controller.hpp
//  DataStructures
//
//  Created by Shepherd, Kayden on 1/28/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "../Model/Linear/LinearTester.hpp"
#include "FileController.hpp"

using namespace std;

class Controller
{
private:
    void usingNodes();
    void testLinear();
public:
    void start();
};

#endif /* Controller_hpp */
