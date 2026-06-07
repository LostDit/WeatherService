//
// Created by LostDead on 07.06.2026.
//

#include "Weather.h"

Weather::Weather(const std::string& city, double lon, double lat,
                 double temperature, const std::string& weather,
                 double windSpeed, int clouds)
        : city(city), lon(lon), lat(lat), temperature(temperature),
          weather(weather), windSpeed(windSpeed), clouds(clouds) {}

void Weather::print() const {
    std::cout << "Город: " << city << "\n"
              << "Координаты: (" << lat << ", " << lon << ")\n"
              << "Температура: " << temperature << " °C\n"
              << "Погода: " << weather << "\n"
              << "Скорость ветра: " << windSpeed << " м/с\n"
              << "Облачность: " << clouds << "%\n";
}