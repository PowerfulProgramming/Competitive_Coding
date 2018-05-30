/*
 * created by Darius Moomivand on 24 May 2018
 * UVA 11364 Parking
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

int main() {
//    freopen("/Users/dariusmoomivand/Temp/test.txt", "r", stdin);
    int x, y, z = 0;
    int temp, total = 0;
    std::string string;
    std::vector<int> inputVec;

    std::cin >> x;
    std::cin.ignore();

    for (int i = 0; i < x; i++) {
        std::cin >> y;
        std::cin.ignore(256, '\n');

        getline(std::cin, string);
        std::stringstream ss(string);

        for (int j = 0; j < y; j++) {
            ss >> z;
            inputVec.push_back(z);
        }
        std::sort(inputVec.begin(), inputVec.end());

        total = inputVec.back() - inputVec.front();
        total = total * 2;

        std::cout << total << "\n";

        inputVec.clear();
    }

    return 0;
}