void mainmenu(){
    printf("\t\tTo get the area and volume of solid shapes\n\n\n");
    printf("\t\t\tHere is your menu\n\n");
    printf("\t\t\t3D SHAPES\n\n");
    printf("\t\t\t  1. Sphere\n");
    printf("\t\t\t  2. Cone\n");
    printf("\t\t\t  3. Cylinder\n");
    printf("\t\t\t  4. Cube\n\n");
    printf("\t\t\t2D SHAPES\n\n");
    printf("\t\t\t  5. Circle\n");
    printf("\t\t\t  6. Square\n");
    printf("\t\t\t  7. Rectangle\n");
    printf("\t\t\t  8. Triangle\n\n");
    printf("\t\t\tEnter your option\t");
}

void sphere(){
    float volume, area, radius;
    printf("Enter radius to calculate volume and surface area of the sphere:\n\n");
    scanf("%f", &radius);
    volume = (4*3.14159265359*radius*radius*radius)/3;
    area = 4*3.14159265359*radius*radius;
    printf("\n\nArea of Sphere: %f\nVolume of Sphere: %f\n\n\n\n" ,area ,volume);
}

void cone(){
    printf("Enter radius to calculate the volume and area of the cone:\n\n");
    float volume, radius, area, height, l;
    scanf("%f", &radius);
    printf("\nEnter height of Cone\n\n");
    scanf("%f", &height);
    volume = (3.14159265359*radius*radius*height)/3;
    l = sqrt(height*height+radius*radius);
    area = 3.14159265359*radius*l+3.14159265359*radius*radius;
    printf("\n\nArea of Cone: %f\nVolume of Cone: %f\n\n\n\n" ,area, volume);
}

void cylinder(){
    printf("Enter radius of the cylinder:\n\n");
    float radius, volume, area, height;
    scanf("%f" ,&radius);
    printf("\nEnter height of cylinder\n\n");
    scanf("%f" ,&height);
    volume = 3.14159265359*radius*radius*height;
    area = 2*3.14159265359*radius*height+2*3.14159265359*radius*radius;
    printf("\n\nArea of Cylinder: %f\nVolume of Cylinder: %f\n\n\n\n",area, volume);
}

void cube(){
    printf("Enter edge of the cube:\n\n");
    float edge,volume,area;
    scanf("%f", &edge);
    volume = edge*edge*edge;
    area = 6*edge*edge;
    printf("\n\nArea of Cube: %f\nVolume of Cube: %f\n\n\n\n", area, volume);
}

void circle(){
    printf("Enter radius of circle:\n\n");
    float radius,area;
    scanf("%f", &radius);
    area = 3.14159265359*radius*radius;
    printf("\n\nArea of Circle: %f\n\n\n\n", area);
}

void square(){
    printf("Enter side of square:\n\n");
    float side,area;
    scanf("%f", &side);
    area = side*side;
    printf("\n\nArea of Square: %f\n\n\n\n", area);
}

void rectangle(){
    printf("Enter the length of rectangle:\n\n");
    float length,width,area;
    scanf("%f", &length);
    printf("Enter the width of rectangle:\n\n");
    scanf("%f", &width);
    area = length*width;
    printf("\n\nArea of Rectangle: %f\n\n\n\n", area);
}

void triangle(){
    printf("Enter the base of triangle:\n\n");
    float base,height,area;
    scanf("%f", &base);
    printf("Enter the height of rectangle:\n\n");
    scanf("%f", &height);
    area = (base*height)/2;
    printf("\n\nArea of Triangle: %f\n\n\n\n", area);
}
