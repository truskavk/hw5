#include "Header.h"
#include <iostream>
#include <string>
#include <vector>
#include <optional>

using namespace std;

void Weather::Print() {
    cout << "Day: " << day << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Temperature: " << temp << endl;
    cout << "Humidity: " << humidity << endl;
    cout << "Windspeed: " << windspeed << endl;
    cout << "Type: " << weatherType << endl;
}
int main() {
    Weather day1(5, "Chernivtsi", "Ukraine", 2, 70, 6, SUNNY);
    Weather day2(3, "Kharkiv", "Ukraine", 17, 100, 4, RAINY);
    Weather day3(5, "Kyiv", "Ukraine", 22, 50, 2, FOGGY);
    Weather day4(3, "Lviv", "Ukraine", 41, 90, 3, RAINY);

    WeatherCalendar Calendar;
    Calendar.addWeatherItem(day1);
    Calendar.addWeatherItem(day3);
    Calendar.addWeatherItem(day2);
    Calendar.addWeatherItem(day4);
    day1.Print();
    day4.isLvivWeather();
    Calendar.bubbleSort();
    Calendar.PrintVector();
    cout << "\nThe highest temperature " << Calendar.findMaxTemprature(5) << endl;
    cout << "\nThe highest temperature " << Calendar.findMaxTemprature(3) << endl;
 }
