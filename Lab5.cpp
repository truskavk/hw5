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
    Weather day2(5, "Kharkiv", "Ukraine", 17, 100, 4, RAINY);
    Weather day3(5, "Kyiv", "Ukraine", 22, 50, 2, FOGGY);
    Weather day4(3, "Kyiv", "Ukraine", 41, 90, 3, RAINY);
    Weather day5(3, "Kharkiv", "Ukraine", 23, 40, 3, CLOUDY);
    Weather day6(3, "Lviv", "Ukraine", 3, 40, 3, SUNNY);
    Weather day7(1, "Kyiv", "Ukraine", 0, 80, 15, RAINY);
    Weather day8(1, "Lviv", "Ukraine", -23, 80, 15, RAINY);

    WeatherCalendar Calendar;
    Calendar.addWeatherItem(day1);
    Calendar.addWeatherItem(day6);
    Calendar.addWeatherItem(day4);
    Calendar.addWeatherItem(day8);
    Calendar.addWeatherItem(day3);
    Calendar.addWeatherItem(day7);
    Calendar.addWeatherItem(day2);
    Calendar.addWeatherItem(day5);
    day1.Print();
    day1.isLvivWeather();
    Calendar.bubbleSort();
    Calendar.PrintVector();
    cout << "\nThe highest temperature " << Calendar.findMaxTemprature(5) << endl;
    cout << "\nThe highest temperature " << Calendar.findMaxTemprature(3) << endl;
    cout << "\nThe highest temperature " << Calendar.findMaxTemprature(1) << endl;






}