//
// Created by LostDead on 07.06.2026.
//

#pragma once
#include <string>
#include <iostream>

class Weather {
public:
    std::string city;
    double lon;
    double lat;
    double temperature;
    std::string weather;
    double windSpeed;
    int clouds;

    Weather(const std::string& city, double lon, double lat,
            double temperature, const std::string& weather,
            double windSpeed, int clouds);

    void print() const;
};
