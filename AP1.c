#include <stdio.h>

// Function to turn ON fan
void fan_on() {
    printf("Fan is ON\n");
}

// Function to turn OFF fan
void fan_off() {
    printf("Fan is OFF\n");
}

int main() {
    int temperature;

    while (1) {   // Continuous running (like real system)

        printf("\nEnter temperature: ");
        scanf("%d", &temperature);

        // Decision making with multiple conditions
        if (temperature > 100) {
            printf("High Temperature → Fan ON (High Speed)\n");
            fan_on();
        }
        else if (temperature > 50) {
            printf("Medium Temperature → Fan ON (Low Speed)\n");
            fan_on();
        }
        else {
            printf("Low Temperature → Fan OFF\n");
            fan_off();
        }
    }

    return 0;
}
