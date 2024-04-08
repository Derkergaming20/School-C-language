#include <stdio.h>

void compute_circumference(float *radius, float *circumference) {
    *circumference = 2 * 3.14 * (*radius);
}

void compute_area(float *radius, float *area) {
    *area = 3.14 * (*radius) * (*radius);
}

int main() {
    float radius, circumference, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    compute_circumference(&radius, &circumference);
    printf("Circumference = %f\n", circumference);

    compute_area(&radius, &area);
    printf("Area = %f\n", area);

}
