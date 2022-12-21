#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <optional>

using namespace std;

enum type WeatherType {
    FOGGY,
    SUNNY,
    CLOUDY,
    RAINY,
     NONE
};


class Weather {

public:
    int day;
    string city;
    string country;
    float temp;
    int humidity;
    float windspeed;
    int typeOfTheWeather;

    Weather() {
        day = 0;
        city = "0";
        country = "0";
        temp = 0;
        humidity = 0;
        windspeed = 0;
        typeOfTheWeather = NONE;
    }

    Weather(int day, string city, string country, float temp, int humidity, float windspeed, type a) {
        this->day = day;
        this->city = city;
        this->country = country;
        this->temp = temp;
        this->humidity = humidity;
        this->windspeed = windspeed;
        this->typeOfTheWeather= a;
    }

    ~Weather() {
    }
    void Print();
    
    void isLvivWeather() {
        if (humidity >= 80 && typeOfTheWeather == RAINY) {
            cout << "Typical weather in Lviv" << endl;
        }
        else {
            cout << "You are lucky, man" << endl;
        }
    }
};

class WeatherCalendar {
public:
    Weather WeatherItem;

    vector <Weather> allDaysOfWeather;

    vector <Weather> addWeatherItem(Weather WeatherItem) {
        allDaysOfWeather.push_back(WeatherItem);
        return allDaysOfWeather;
    }
    
    float findMaxTemprature(int randomDay) {
        float maxTemp = 0;
        int daysFound = 0;

        for (int i = 0; i < allDaysOfWeather.size(); i++) {

            if (allDaysOfWeather[i].day == randomDay) {
                daysFound = 1;
                if (allDaysOfWeather[i].temp > maxTemp) {
                    maxTemp = allDaysOfWeather[i].temp;
                }
            }

        }
        if (daysFound == 0) {
            cout << "NOT ENOUGH DATA";
        }
        
        return maxTemp;

    }
    void bubbleSort()
    {
        int i, j;
        for (i = 0; i < allDaysOfWeather.size() - 1; i++) {

            for (j = 0; j < allDaysOfWeather.size() - i - 1; j++) {
                if (allDaysOfWeather[j].day > allDaysOfWeather[j + 1].day) {
                    swap(allDaysOfWeather[j], allDaysOfWeather[j + 1]);
                }
            }
        }
    }

    void PrintVector() {
        for (int i = 0; i < allDaysOfWeather.size(); i++) {
            cout << allDaysOfWeather[i].day << endl;
        }
    }


};
