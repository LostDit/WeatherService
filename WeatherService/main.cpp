#include "XmlService.h"
#include <windows.h>
int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    try {
        XmlService xs;
        Weather w = xs.getWeather("weather.xml");
        w.print();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}