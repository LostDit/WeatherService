//
// Created by LostDead on 07.06.2026.
//

#pragma once
#include "Weather.h"
#include <string>

class Service {
public:
    virtual Weather getWeather(const std::string& s) = 0;
    virtual ~Service() {}
};
