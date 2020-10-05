#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "SurfaceEtVolume.h"
#include "test_surfaceetvolume.h"

int main(){
    int n;
    int choose;
    int again = 1;

    while(again == 1){
        mainmenu();
        scanf("%d",&n);
        system("CLS");
    switch(n){
    case 1:
        system("CLS");
        sphere();
        break;
    case 2:
        system("CLS");
        cone();
        break;
    case 3:
        system("CLS");
        cylinder();
        break;
    case 4:
        system("CLS");
        cube();
        break;
    case 5:
        system("CLS");
        circle();
        break;
    case 6:
        system("CLS");
        square();
        break;
    case 7:
        system("CLS");
        rectangle();
        break;
    case 8:
        system("CLS");
        triangle();
        break;
    default:
        printf("Error\n");
        break;
    }
    printf("\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("\t\tWould you like to do another calculations:\n\n");
    printf("\t\t\t< 1 > Yes\n");
    printf("\t\t\t< 2 > No\n");
    printf("Select your option: ");
    scanf("\t%d", &choose);
        system("CLS");
        if (choose == 2) {
            printf("\n\n\n\n\t\t\t\t-----THANKYOU FOR USING SURFACE ET VOLUME!!!-----\n\n\n\n");
            printf("\n\n\n\n\t\t\t\t\t-----HAVE A NICE DAY!!!-----\n\n\n\n");
            break;
        }
    }
    test_main();
    return 0;
}
