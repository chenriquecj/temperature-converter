#include <iostream>

//C = Celsius
//F = Fahrenheit
//K = Kelvin

double C2F(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double F2C(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double C2K(double celsius) {
    return celsius + 273.15;
}

double K2C(double kelvin) {
    return kelvin - 273.15;
}

int main (){
    int choice;
    double temperature, convertedTemperature;
    std::cout << "Temperature Converter" << std::endl;
    std::cout << "1. Celsius to Fahrenheit" << std::endl;
    std::cout << "2. Fahrenheit to Celsius" << std::endl;
    std::cout << "3. Celsius to Kelvin" << std::endl;
    std::cout << "4. Kelvin to Celsius" << std::endl;
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    std::cout << "Enter the temperature: ";
    std::cin >> temperature;

    switch (choice)
    {
    case 1:
        convertedTemperature = C2F(temperature);
        break;
    case 2:
        convertedTemperature = F2C(temperature);
        break;
    case 3:
        convertedTemperature = C2K(temperature);
        break;
    case 4:
        convertedTemperature = K2C(temperature);
        break;
    default:
        std::cout << "Invalid choice." << std::endl;
        return 1;
    }

    std::cout << "Converted Temperature: " << convertedTemperature << std::endl;

    return 0;
}