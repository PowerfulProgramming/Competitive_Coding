#include <iostream>
#include <string>
#include <sstream>

int main() {
    int x, z;
    int max;
    int cases = 0;
    std::string inbound;

    std::cin >> x;
    std::cin.ignore(256, '\n');

    for(int i = 0; i < x; i++) {
        max = 0;
        std::getline(std::cin, inbound);
        std::stringstream ss(inbound);
        while(ss >> z) {
            if (z > max) {
                max = z;
            }
        }
        cases++;
        std::cout << "Case " << cases << ": " << max << std::endl;
    }

    return 0;
}