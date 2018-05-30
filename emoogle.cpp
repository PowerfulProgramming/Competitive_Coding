/*
 * created by Darius Moomivand
 * UVA problem 12279 emoogle balance
 */
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>

int main() {
    int x, y, counter = 0;
    int testCase = 0;
    std::string temp;

    while(std::cin >> x){
        if(x == 0){
            break;
        }
        std::cin.ignore(256, '\n');
        std::getline(std::cin, temp);
        std::stringstream ss(temp);
        for (int i = 0; i < x; i++) {
            ss >> y;
            if (y == 0) {
                --counter;
            }
            else {
                counter++;
            }
        }
        testCase++;
        std::cout << "Case " << testCase << ": " << counter << std::endl;
        counter = 0;
    }

    return 0;
}