#include <SurfaceEtVolume.h>

void sphere(){
    float volume, area, radius;
    printf("Enter radius to calculate volume and surface area of the sphere: ");
    scanf("%f", &radius);
    volume = (4*3.14159265359*radius*radius*radius)/3;
    area = 4*3.14159265359*radius*radius;
    printf("\n\nArea of Sphere: %f\nVolume of Sphere: %f\n\n\n\n" ,area ,volume);
}

void cone(){
    float volume, radius, area, height, l;
    printf("Enter radius to calculate the volume and area of the cone: ");
    scanf("%f", &radius);
    printf("\nEnter height of Cone: ");
    scanf("%f", &height);
    printf("\nEnter the slant height: ");
    scanf("%f", &l);
    volume = (3.14159265359*radius*radius*height)/3;
    area = 3.14159265359*radius*l+3.14159265359*radius*radius;
    printf("\n\nArea of Cone: %f\nVolume of Cone: %f\n\n\n\n" ,area, volume);
}

void cylinder(){
    float radius, volume, area, height;
    printf("Enter radius of the cylinder: ");
    scanf("%f" ,&radius);
    printf("\nEnter height of cylinder: ");
    scanf("%f" ,&height);
    volume = 3.14159265359*radius*radius*height;
    area = 2*3.14159265359*radius*height+2*3.14159265359*radius*radius;
    printf("\n\nArea of Cylinder: %f\nVolume of Cylinder: %f\n\n\n\n",area, volume);
}

void cube(){
    float edge,volume,area;
    printf("Enter edge of the cube: ");
    scanf("%f", &edge);
    volume = edge*edge*edge;
    area = 6*edge*edge;
    printf("\n\nArea of Cube: %f\nVolume of Cube: %f\n\n\n\n", area, volume);
}

void circle(){
    printf("Enter radius of circle: ");
    float radius,area;
    scanf("%f", &radius);
    area = 3.14159265359*radius*radius;
    printf("\n\nArea of Circle: %f\n\n\n\n", area);
}

void square(){
    printf("Enter side of square: ");
    float side,area;
    scanf("%f", &side);
    area = side*side;
    printf("\n\nArea of Square: %f\n\n\n\n", area);
}

void rectangle(){
    printf("Enter the length of rectangle: ");
    float length,width,area;
    scanf("%f", &length);
    printf("\nEnter the width of rectangle: ");
    scanf("%f", &width);
    area = length*width;
    printf("\n\nArea of Rectangle: %f\n\n\n\n", area);
}

void triangle(){
    printf("Enter the base of triangle: ");
    float base,height,area;
    scanf("%f", &base);
    printf("\nEnter the height of triangle: ");
    scanf("%f", &height);
    area = (base*height)/2;
    printf("\n\nArea of Triangle: %f\n\n\n\n", area);
}
