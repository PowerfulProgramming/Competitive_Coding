/*
*   Created by Darius Moomivand on June 17, 2018
*    UVA problem 10226 Hardwood Species
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <map>
#include <iomanip>


int main() {

    freopen("/Users/dariusmoomivand/Temp/test.txt", "r", stdin);

    std::map<std::string, float> trees;
    int sets = 0;
    float max = 0;
    std::string temp;

    scanf("%d\n\n", &sets);

    max = 0;
    while (sets > 0) {

        while(std::getline(std::cin, temp)) {
            if(temp.length() == 0) {
                break;
            }
            max++;
            trees[temp]++;
        }
        for (std::map<std::string, float>::iterator it = trees.begin(); it != trees.end(); ++it) {
            std::cout << it->first << " " << std::setprecision(4) << std::fixed << it->second*100/max << std::endl;
        }
        sets--;
        if(sets)
            std::cout << std::endl;
            trees.clear();
            max = 0;
    }
    return 0;
}
