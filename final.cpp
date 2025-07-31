#include<iostream>
#include<thread>
#include<algorithm>
#include<deque>
#include<vector>
#include<list>
using namespace std;
mutex mtx;
class HVACContarol{
    virtual void render()const=0
    virtual void update()=0;
};
class TemperatureControl:public HVACContarol{
    double temperature;
    int fanlevel;
public:
    TemperatureControl(double temp, int fan) : temperature(temp), fanlevel(fan) {}  
        void render() const override {
        cout << " temperature: " << temperature << "°C" << endl;
    }
    void update() override {
        cout << "Updating temperature control..." << endl;
        temperature += 0;
        cout << "New temperature: " << temperature << "°C" << endl;
    }
};
class FanSpeedControl:public HVACContarol{
    int fanlevel;
    public:
    FanSpeedControl(int fan):fanlevel

}
