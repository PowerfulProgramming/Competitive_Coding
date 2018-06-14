/*
 * Created by Darius Moomivand on 14 Jun 2018
 * Solution to The Lonesome Cargo Distributor UVA 10172
 */

#include <iostream>
#include <stack>
#include <queue>


int main() {

    std::queue<int> station[105];
    std::stack<int> cargoCarrier;

    int toBeDelivered = 0;
    int varN = 0;
    int varS = 0;
    int varQ = 0;
    int varX = 0;
    int temp = 0;
    int stationCargoAmount = 0;
    int totalTime = 0;

    scanf("%i", &varX);

    while(varX > 0){

        scanf("%i%i%i", &varN, &varS, &varQ);

        for(int i = 1; i < varN+1; i++){

            scanf("%i", &stationCargoAmount);

            for(int j = 0; j < stationCargoAmount; j++){
                scanf("%i", &temp);
                station[i].push(temp);
                toBeDelivered++;
            }

        }

        totalTime = 0;

        while(toBeDelivered != 0){

            for(int i = 1; i < varN +1; i++) {

                while ((!cargoCarrier.empty()) && (cargoCarrier.top() == i)) {
                    totalTime += 1;
                    cargoCarrier.pop();
                    toBeDelivered -= 1;
                }

                while ((station[i].size() < varQ) && (!cargoCarrier.empty())) {
                    temp = cargoCarrier.top();
                    station[i].push(temp);
                    totalTime +=1;
                    cargoCarrier.pop();

                    while ((!cargoCarrier.empty()) && (cargoCarrier.top() == i)) {
                        totalTime += 1;
                        cargoCarrier.pop();
                        toBeDelivered -=1;

                    }

                }

                while ((cargoCarrier.size() < varS) && (!station[i].empty())) {
                    temp = station[i].front();
                    cargoCarrier.push(temp);
                    station[i].pop();
                    totalTime +=1;

                }
                if(toBeDelivered == 0)
                    break;
                totalTime += 2;

            }

        }

        std::cout << totalTime << std::endl;
        varX--;
    }

    return 0;
}
