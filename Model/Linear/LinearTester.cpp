//
//  LinearTester.cpp
//  DataStructures
//
//  Created by Shepherd, Kayden on 2/19/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/kayden.shepherd/Documents/DataStructures AM 2019/DataStructures/Data/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: 
}
