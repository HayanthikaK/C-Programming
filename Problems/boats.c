#include <stdio.h>

int main() {
    float boatSpeed, streamSpeed;
    float upstream, downstream;

    printf("Enter speed of boat in still water (km/hr): ");
    scanf("%f", &boatSpeed);

    printf("Enter speed of stream (km/hr): ");
    scanf("%f", &streamSpeed);

    downstream = boatSpeed + streamSpeed;
    upstream = boatSpeed - streamSpeed;

    printf("\nDownstream speed = %.2f km/hr", downstream);
    printf("\nUpstream speed   = %.2f km/hr", upstream);

    return 0;
}
