//
//  FileController.hpp
//  DataStructures
//
//  Created by Shepherd, Kayden on 2/5/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <stdio.h>
#include "../Data/CrimeData.hpp"
#include "../Data/Music.hpp"
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(String fileName);
    static BinarySearchTree<CrimeData> readDataToTree(string filename);
    
    static vector<Music> musicDataToVector(string filename);
    
    static Array<Music> musicDataToArray(sring filename);
    static LinkedList<Music> musicDataToList(string filename);
    static BinarySearchTree<Music> musicDataToTree(string filename);
};

#endif /* FileController_hpp */
