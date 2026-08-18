CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -g

TARGET = wayfarer

SRCS = main.cpp \
       AirState.cpp \
       BossQuestDestination.cpp \
       DesertTerrain.cpp \
       Destination.cpp \
       FetchQuestDestination.cpp \
       ForestTerrain.cpp \
       GameManager.cpp \
       GPS.cpp \
       GroundState.cpp \
       Map.cpp \
       MoveState.cpp \
       NPC.cpp \
       Obstacle.cpp \
       OceanTerrain.cpp \
       Player.cpp \
       QuestDestination.cpp \
       RainWeatherDestination.cpp \
       Region.cpp \
       RouteStrategy.cpp \
       ScenicRouteStrategy.cpp \
       ShortestRouteStrategy.cpp \
       SunnyWeatherDestination.cpp \
       Terrain.cpp \
       Trip.cpp \
       WaterState.cpp \
       WeatherDestination.cpp \
       WorldBuilder.cpp

# Filter only existing source files
EXISTING_SRCS = $(wildcard $(SRCS))
OBJS = $(EXISTING_SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

valgrind: $(TARGET)
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all run valgrind clean
