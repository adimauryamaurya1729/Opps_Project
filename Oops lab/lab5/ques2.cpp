#include <iostream>

class WiFiModule {
public:
    void connect() {
        std::cout << "Connected to WiFi network.\n";
    }
};

class ZigbeeModule {
public:
    void connect() {
        std::cout << "Connected to Zigbee mesh.\n";
    }
};

class HardwareHub : public WiFiModule, public ZigbeeModule {
public:
    void initializeHub() {
        WiFiModule::connect();
        ZigbeeModule::connect();
    }
};

int main() {
    HardwareHub hub;
    hub.initializeHub();
    return 0;
}