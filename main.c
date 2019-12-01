#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(int argc, char** argv) {
    /*printf("Hello, sailor!\n");
    //getchar();
    scanf("Please type in something, anything");*/

    /*
     * macros and constants in caps: MAX_BUFFER_SIZE, PI
     * struct names and typedefs in camel case: GtkWidget, TrackingOrder
     * pointers: GtkWidget *foo, TrackingOrder *bar
     */
//    int a = 5;
//    float f = 5.17;
//    printf("a = %i, f = %.2f \n", a, f);
//    f=8;
//    printf("f=%.2f\n", f);
//    a = a+f;
//    printf("a=a+f: %i\n", a);
//    f = a+f;
//    printf("f=a+f: %.2f\n", f);
//
//    const float PI=3.14159;
//
//    // -- rpinting and capturing user input
//    int a_number;
//    char a_char[100];
//    printf("\nType in a number:");
//    scanf("%d", &a_number);
//    printf("You entered %d", a_number);
//
//    printf("\nType in some characters:");
//    scanf("%s", &a_char);
//    printf("You entered %s", a_char);
    /* /<editor-fold desc="Description">
    printf("-- data types --\n");
    char char_a = 'a';
    printf("char_a = %c\n", char_a);
    printf("Storage for size of char: %d\n", sizeof(char));
    printf("Storage for size of int: %d\n", sizeof(int));
    printf("Storage for size of float: %d\n", sizeof(float));
    printf("Storage for size of double: %d\n", sizeof(double));

    printf("Min float value: %E\n",  FLT_MIN);
    printf("Max float value: %E\n",  FLT_MAX);
    printf("Precision value: %d\n",  FLT_DIG);
    printf("Precision Mant value: %d\n",  FLT_MANT_DIG);
    //</editor-fold> */
/*
    printf("\n -- command line arguments --\n");

        if(argc==1){
            printf("program name is the only argument available");
        }
        else if(argc==2){
            printf("the user supplied argument is: %s\n", argv[1]);
        }
        else if(argc==3){
            printf("the user supplied arguments are: %s, %s\n", argv[1], argv[2]);
        } else {
            printf("expected argument count not available");
        }

    printf("\n -- arithmetic operators --\n");
        int num1 = 1, num2 = 2;
        int num3 = num1 + num2;
        printf("num3 = num1 + num2: %d\n", num3);
        int num3a = num1 - num2;
        printf("num3a = num1 - num2: %d\n", num3a);
        int num3b = num1 * num2;
        printf("num3b = num1 * num2: %d\n", num3b);
        int num3c = num1 / num2;
        printf("num3c = num1 / num2: %d\n", num3c);

        printf("num1=%d, num2=%d\n", num1, num2);
        int num3d = num1 % num2;
        printf("num3c = num1 %% num2: %d\n", num3d);
        printf("num3=%d\n", num3);
        num3++;
        printf("num3: %d\n", num3);

        printf("\n-- other shorthand notations --\n");
        num1 = 2;
        printf("num1: %d\n", num1);
        printf("num1+=1: %d\n", num1+=1);
        printf("num1-=5: %d\n", num1-=5);
        printf("num1*=6: %d\n", num1*=6);
        printf("num1/=7: %d\n", num1/=7);
        printf("num1%%-7: %d\n", num1%=-7);
*/
    printf("\n-- input buffer flushing --\n");
    char str[80], ch;
    scanf("%s", str);
    while ((getchar()) != '\n');
    ch = getchar();
    printf("this is str %s\n", str);
    printf("this is ch %c", ch);

    return (EXIT_SUCCESS);
}
