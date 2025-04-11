#include<stdio.h>

enum week{sun,mon,tue,wed,thu,fri,sat};
 int main(){
    enum week today;
    //assign a value to enum
    today = wed;
    //display the value of enum

    printf("today is %d\n",today);

        //use switch case to display day

        switch(today){
            case sun:
                printf("today is sunday\n");
                break;
            case mon:
                printf("today is monday\n");
                break;
            case tue:
                printf("today is tuesday\n");
                break;
            case wed:
                printf("today is wednesday\n");
                break;
            case thu:
                printf("today is thursday\n");
                break;
            case fri:
                printf("today is friday\n");
                break;
            case sat:
                printf("today is saturday\n");
                break;
            default:
                printf("invalid day\n");
        }

return 0;
 }