/*
*   created by Darius Moomivand on June 14, 2018
*      UVA Problem 10038
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main() {

//    freopen("/Users/dariusmoomivand/Temp/test.txt", "r", stdin);

    std::vector<int> joly;
    std::vector<int> jumper;

    bool realJumper = true;
    int amount = 0;
    int integers = 0;
    int difference = 0;

    while(std::cin >> amount) {

        for (int i = 0; i < amount; i++) {
            std::cin >> integers;
            joly.push_back(integers);
        }


        for (int i = 0; i < amount-1; i++) {
            difference = joly[i + 1] - joly[i];
            jumper.push_back(abs(difference));
        }

        sort(jumper.begin(), jumper.end());

        realJumper = true;
        int j = 1;

        for (std::vector<int>::iterator it = jumper.begin(); it != jumper.end(); it++) {
            if (*it != j)
                realJumper = false;
            j++;
        }

        if (realJumper) {
            std::cout << "Jolly\n";
        } else std::cout << "Not jolly\n";

        joly.clear();
        jumper.clear();

    }
    return 0;
}
