#include <stdio.h>
#include <string.h>

int main() {
    char *stations[] = {"Sealdah", "Dum Dum", "Belgharia", "Agarpara", "Sodepur", "Khardaha", "Titagarh", "Barrackpore", "Palta", "Ichhapur", "Kanchrapara", "Naihati"};
    int num_stations = sizeof(stations) / sizeof(stations[0]);
    
    char current_station[20];
    printf("Enter Kritika's current station: ");
    scanf("%s", current_station);

    int found = 0;
    for (int i = 0; i < num_stations; i++) {
        if (strcmp(stations[i], current_station) == 0) {
            found = 1;
            if (strcmp(current_station, "Barrackpore") == 0) {
                printf("Yes! Kritika has arrived at Barrackpore.\n");
            } else {
                printf("Kritika is at %s, not at Barrackpore yet.\n", current_station);
            }
            break;
        }
    }

    if (!found) {
        printf("Invalid station name entered.\n");
    }

    return 0;
}
