#include <stdio.h>

double conv_to_celsius(double temperature, char scale) {

    if (scale == 'C')
        return temperature;

    if (scale == 'F')
        return (temperature - 32) * (5.0 / 9.0);

    if (scale == 'K')
        return temperature - 273.15;

    return 0;
}

double conv_from_celsius(double temperature, char scale) {

    if (scale == 'C')
        return temperature;

    if (scale == 'F')
        return temperature * 9.0 / 5.0 + 32;

    if (scale == 'K')
        return temperature + 273.15;

    return 0;
}

void c_temperature(double celsius) {

    printf("Temperature category: ");

    if (celsius < 0)
        printf("Freezing\nWeather advisory: Wear a coat!\n");

    else if (celsius < 10)
        printf("Cold\nWeather advisory: Wear a jacket.\n");

    else if (celsius < 25)
        printf("Comfortable\nWeather advisory: Enjoy the weather.\n");

    else if (celsius < 35)
        printf("Hot\nWeather advisory: Drink water and stay cool!\n");

    else
        printf("Extreme Heat\nWeather advisory: Stay indoors.\n");
}

int main() {

    double temperature, converted, celsius;
    char conv_from_scale, conv_to_scale;

    printf("Enter the temperature value: ");

    if (scanf("%lf", &temperature) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter original scale (C, F, K): ");
    scanf(" %c", &conv_from_scale);

    printf("Enter target scale (C, F, K): ");
    scanf(" %c", &conv_to_scale);

    if ((conv_from_scale != 'C' && conv_from_scale != 'F' && conv_from_scale != 'K') ||
        (conv_to_scale != 'C' && conv_to_scale != 'F' && conv_to_scale != 'K')) {

        printf("Invalid scale.\n");
        return 1;
    }

    celsius = conv_to_celsius(temperature, conv_from_scale);

    converted = conv_from_celsius(celsius, conv_to_scale);

    printf("Converted temperature: %.2lf %c\n", converted, conv_to_scale);

    c_temperature(celsius);

    return 0;
}

