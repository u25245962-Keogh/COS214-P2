
#include "Region.h"
#include "Destination.h"
#include "QuestDestination.h"
#include "BossQuestDestination.h"
#include "WeatherDestination.h"
#include "RainWeatherDestination.h"
int main(){
//Decorator testing

// Example usage:
Destination* baseLocation = new Destination("Forest");
Map* decorated = new RainWeatherDestination(new BossQuestDestination(baseLocation, "Dragon"));
decorated->print();



    return 0;
}