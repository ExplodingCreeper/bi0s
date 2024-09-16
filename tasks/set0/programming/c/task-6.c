#include <stdio.h>
#include <math.h>

double coneArea(double r, double h) {
    double slantH = sqrt(r * r + h * h);
    return 3.14 * r * (r + slantH);
}

double coneVolume(double r, double h) {
    return (1.0/3.0) * 3.14 * r * r * h;
}

double sphereArea(double r) {
    return 4 * 3.14 * r * r;
}

double sphereVolume(double r) {
    return (4.0/3.0) * 3.14 * r * r * r;
}

double cuboidArea(double length, double width, double h) {
    return 2 * (length * width + width * h + h * length);
}

double cuboidVolume(double length, double width, double h) {
    return length * width * h;
}

int main() {
    double coneR = 5.0, coneH = 10.0;

    double sphereR = 6.0;

    double cuboidLength = 10.0, cuboidWidth = 5.0, cuboidH = 8.0;

    printf("Cone Surface Area: %.2f\n", coneArea(coneR, coneH));
    printf("Cone Volume: %.2f\n\n", coneVolume(coneR, coneH));

    printf("Sphere Surface Area: %.2f\n", sphereArea(sphereR));
    printf("Sphere Volume: %.2f\n\n", sphereVolume(sphereR));

    printf("Cuboid Surface Area: %.2f\n", cuboidArea(cuboidLength, cuboidWidth, cuboidH));
    printf("Cuboid Volume: %.2f\n", cuboidVolume(cuboidLength, cuboidWidth, cuboidH));

    return 0;
}