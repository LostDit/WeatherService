//
// Created by LostDead on 07.06.2026.
//

#include "JsonService.h"
#include <fstream>
#include <stdexcept>
#include "json.hpp"

using json = nlohmann::json;

Weather JsonService::getWeather(const std::string& s) {
    std::ifstream fin(s);
    if (!fin)
        throw std::runtime_error("Не удалось открыть JSON файл");

    json j;
    fin >> j; // или j = json::parse(fin);

    std::string city = j["name"];
    double lon = j["coord"]["lon"];
    double lat = j["coord"]["lat"];
    double temperature = j["main"]["temp"];
    std::string weather = j["weather"][0]["description"];
    double windSpeed = j["wind"]["speed"];
    int clouds = j["clouds"]["all"];

    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}