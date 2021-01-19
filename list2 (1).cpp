// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2021
// This program uses an array


#include <iostream>
using namespace std;

int max(int array[10]);

int main() {
int array[10];
int large = max(array);

cout << "\n\nThe largest number is " << large << "\nDone." << endl;
}

int max(int array[10]) {
    srand(time(0));
    for (int loop = 0; loop < 10; loop++) {
        array[loop] = (rand() % 100) + 1;
    }
    cout << "Here is a list of random numbers:\n" << endl;

    for (int loop = 0; loop <1 0; loop++) {
    cout << "The random number " << loop+1 << " is: " << array[loop] << endl;
}

int large = array[0];
    for (int loop = 1; loop < 10; loop++) {
        if (large < array[loop])

    large = array[loop];
}
return large;

}