/*
 *  created by Darius Moomivand on 25 May 2018
 *  UVA Nlogonia 11498
 */

#include <iostream>
#include <string>
#include <sstream>

int main() {
//    freopen("/Users/dariusmoomivand/Temp/test.txt", "r", stdin);
    int z;
    int xBorder, yBorder = 0;
    int m, n = 0;
    std::string temp;

    while(std::cin >> z){
        std::cin.ignore(256, '\n');
        std::getline(std::cin, temp);
        std::stringstream ss(temp);
        ss >> xBorder;
        ss >> yBorder;

        for (int i = 0; i < z; i++) {
            std::getline(std::cin, temp);
            std::stringstream ss(temp);
            ss >> m;
            ss >> n;
            if (m == xBorder || n == yBorder)
                std::cout << "divisa" << std::endl;
            if(m > xBorder && n > yBorder)
                std::cout << "NE" << std::endl;
            if(m > xBorder && n < yBorder)
                std::cout << "SE" << std::endl;
            if(m < xBorder && n > yBorder)
                std::cout << "NO" << std::endl;
            if(m < xBorder && n < yBorder)
                std::cout << "SO" << std::endl;

        }
    }

    return 0;
}