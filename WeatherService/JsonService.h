//
// Created by LostDead on 07.06.2026.
//

#pragma once
#include "Service.h"

class JsonService : public Service {
public:
    Weather getWeather(const std::string& s) override;
    virtual ~JsonService() {}
};