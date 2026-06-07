#include "JsonService.h"
#include <windows.h>
#include <iostream>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    try {
        JsonService js;
        Weather w = js.getWeather("weather.json");
        w.print();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}