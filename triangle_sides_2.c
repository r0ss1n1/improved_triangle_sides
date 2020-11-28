#include <stdio.h>
#include <math.h>
#define RADIANS_TO_DEGREES 180 / 3.14159265358979323846

/* I love you family, Tai, Mark, Kerri & June */
/* Charles Thomas Wallace Truscott */
typedef struct Triangle {
	float opposite;
	float adjacent;
	float hypotenuse;

} Triangle;

int main(void) {
	Triangle FS;
	printf("Authored by Charles Thomas Wallace Truscott, Suffolk Park / Byron Bay NSW 2481 Australia\n\n");
	printf("Vale Herbert Wallace Truscott\tVale Thomas Watters, Lillian May Turner\n\n");
	printf("Enter the length of the opposite side:\t");
	scanf("%f", &FS.opposite);
	printf("\n\n");
	printf("Enter the length of the adjacent side:\t");
	scanf("%f", &FS.adjacent);
	printf("\n\n");
	printf("Enter the length of the hypotenuse:\t");
	scanf("%f", &FS.hypotenuse);
	printf("\n\n");
	Triangle * S = &FS;
	printf("Opposite / Hypotenuse: %f\nAdjacent / Hypotenuse: %f\nOpposite / Adjacent:   %f\n\n", S->opposite / S->hypotenuse, S->adjacent / S->hypotenuse, S->opposite / S->adjacent);
	printf("\n\n");
	printf("sin^-1(Opposite / Hypotenuse): %f\ncos^-1(Adjacent / Hypotenuse): %f\ntan^-1(Opposite / Adjacent):   %f\n\n", asin(S->opposite / S->hypotenuse) * RADIANS_TO_DEGREES, acos(S->adjacent / S->hypotenuse) * RADIANS_TO_DEGREES, atan(S->opposite / S->adjacent) * RADIANS_TO_DEGREES);
	return 0;
}