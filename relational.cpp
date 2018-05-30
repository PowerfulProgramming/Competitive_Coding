/*
 * created by Darius Moomivand @ 24May2018
 * UVA 11172
 */
#include <iostream>
#include <sstream>

int main() {
//    freopen("/Users/dariusmoomivand/Temp/test.txt", "r", stdin);
    int x, y, z = 0;
    std::string temp;

    while (std::cin >> x) {
        std::cin.ignore(256, '\n');
        for(int i = 0; i < x; i++){
            std::getline(std::cin, temp);
            std::stringstream ss(temp);
            ss >> y;
            ss >> z;
            if (y > z) {
                std::cout << ">" << std::endl;
            }
            else if(y < z) {
                std::cout << "<" << std::endl;
            }
            else {
                std::cout << "=" << std::endl;
            }
        }
    }

    return 0;
}