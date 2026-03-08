#include <stdio.h>

void main()
{
    float a, b, c, d, det;

    printf("Enter elements of 2x2 matrix:\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    det = (a*d) - (b*c);

    if(det == 0)
    {
        printf("Inverse does not exist");
    }
    else
    {
        printf("Inverse of matrix is:\n");

        printf("%f  %f\n", d/det, -b/det);
        printf("%f  %f\n", -c/det, a/det);
    }

}