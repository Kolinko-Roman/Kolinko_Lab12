#include <iostream>
#include <string>
using namespace std;
class Appliance {
protected:
    int power;
public:
    Appliance(int power) : power(power) {}
    void turnOn() const {
        cout << "Прилад увімкнено. Потужність: " << power << " Вт." << endl;
    }
    int getPower() const {
        return power;
    }
};
class WashingMachine : public Appliance {
private:
    int capacity;
public:
    WashingMachine(int power, int capacity) : Appliance(power), capacity(capacity) {}
    void startWash() const {
        cout << "Прання розпочато. Ємність: " << capacity << " кг." << endl;
    }
    int getCapacity() const {
        return capacity;
    }
};
int main() {
    Appliance appliance(1500);
    appliance.turnOn();
    WashingMachine wm(2000, 7);
    wm.turnOn();
    wm.startWash();

    return 0;
}

