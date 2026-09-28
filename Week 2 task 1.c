#include <stdio.h>
#include <math.h>

int main() {
    double height = 0.0;
    const double PI = 3.14159;
    double radius = 0.0;
    double volume = 0.0;
    double surface_area = 0.0;

    printf("Enter the height of the cylinder:");
    scanf("%lf", &height);

    printf("Enter the radius of the cylinder:");
    scanf("%lf", &radius);

    volume = PI * pow(radius, 2) * height;
    surface_area = 2 * PI * pow(radius, 2) + 2 * PI * radius * height;

    printf("The volume of the cylinder is: %.2lf cubic meters\n", volume);
    printf("The surface area of the cylinder is: %.2lf square meters\n", surface_area);

    return 0;
}
