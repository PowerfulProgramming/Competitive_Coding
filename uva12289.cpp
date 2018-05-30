/*
 * created by Darius Moomivand on 24 May 2018
 * UVA12289
 */

#include <iostream>
#include <string>
#include <sstream>

int main() {
//    freopen("/Users/dariusmoomivand/Temp/test.txt", "r", stdin);
    int x = 0;
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    std::string temp;
    std::string string;
    std::string one = "one";
    std::string two = "two";
    std::string three = "three";


    std::cin >> x;
    std::cin.ignore(256, '\n');

    for (int i = 0; i < x; i++) {
        std::getline(std::cin, string);

        for (int j = 0; j < string.length(); j++) {
            if (string[j] == one[j]) {
                counter1++;
            }
            if (string[j] == two[j]) {
                counter2++;
            }
            if (string[j] == three[j]) {
                counter3++;
            }
        }
        if (counter1 > 1) {
            std::cout << "1" << std::endl;
        }
        if (counter2 > 1) {
            std::cout << "2" << std::endl;
        }
        if (counter3 > 2) {
            std::cout << "3" << std::endl;
        }
        counter1 = 0;
        counter2 = 0;
        counter3 = 0;

    }

    return 0;
}