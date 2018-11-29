#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <vector>

class Observer
{
    public:
        virtual void update(float temp, float humidity, float pressure) = 0;
};

class DisplayElement
{
    public:
        virtual void display() = 0;
};

class Subject
{
    public:
        virtual void registerObserver(Observer& o) = 0;
        virtual void removeObserver(Observer& o) = 0;
        virtual void notifyObservers() = 0;
        virtual void measurementsChanged() = 0;
        virtual void setMeasurements(float temperature, float humidity, float pressure) = 0;
};

class WeatherData : public Subject
{
    private:
        vector<Observer*> observers;
        float temperature;
        float humidity;
        float pressure;
    public:
        WheaterData();
        void registerObserver(Observer& o);
        void removeObserver(Observer& o);
        void notifyObservers();
        void measurementsChanged();
        void setMeasurements();
};

class CurrentConditionalDisplay : public Observer, DisplayElement
{
    private:
        float temperature;
        float humidity;
        Subject weatherData;
    public:
        CurrentConditionalDisplay(Subject wd);
        void update(float temp, float hum, float press);
        void display();
};
#endif // _SUBJECT_H_
