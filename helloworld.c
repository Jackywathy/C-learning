#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void ex_3_3(void){
    int a, b, c, d;
    double root;
    double sqr;
    printf("Enter a b c: ");
    scanf("%d %d %d", &a,&b,&c);
    d = b * b  - 4 * a * c;
    printf("%d", d);

    if (d < 0){
        puts("Invalid Discriminant");
    }
    else if (d == 0){
        puts("\nDiscriminant is 0\nAnswer is: ");

        printf("%f", root);
    }
    else{
        sqr = sqrt(d);
        root = (-b+sqr)/2*a;

    }
}




void ex_3_4(void){
    int day,month,year;
    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%d/%d/%d", &day,&month,&year);
    printf("Date read: %02d/%02d/%04d\n",day,month,year);
    /* find if its normal leap year */
    if (month == 2 && day == 28 && year%4 == 0 && (year%100 != 0 || year%400==0)){
        day = 29;
    }
    else if (month == 2 && (day == 29|| day == 28)){
        day = 1;
        month = 3;
    }
    else if (day == 30 && !(month==2||month==4||month==6||month==9||month==11)){
        month ++;
        day = 1;
    }
    else if (day == 31){
        month ++;
        day = 1;
    }
    else{
        day++;
    }
    if (month == 13){
        month = 1;
        year ++;
    }




    printf("Tommorow:  %02d/%02d/%04d",day,month,year);

}

void ex_3_6(void){
    int cents;
    printf("Enter amount in cents: ");
    scanf("%d", &cents);
    printf("\nThe coins required to make %d cents are:\n",cents);
    while (1){
        if (!((cents-50) < 0)){
            printf("50");
            cents -= 50;
        }
        else if (!((cents-20) < 0)){
            printf("20");
            cents -= 20;
        }

        else if (!((cents-10) < 0)){
            printf("10");
            cents -= 10;

        }
        else if (!((cents-2) < 0)){
            printf("2");
            cents -= 2;

        }
        else if (!((cents-1) < 0)){
            printf("1");
            cents -= 1;

        }
        if (cents == 0){
            break;
        }
        else{
            printf(", ");
        }

}
}

void ex_3_7(void){
    char sign;
    int degree;
    double out = 0;
    printf("Enter a temperature(F or C): ");
    scanf("%d%c", &degree, &sign);
    if (sign == 'F'){
        out = degree - 32;
        out = (out * 5)/ 9;
        printf("The temperature %dF converts to %.2f%c",degree, out, 'C');
    }
    else if (sign == 'C'){
        out = degree;
        out = out/9;
        out = out * 5;
        out += 32;
        printf("The temperature %dC converts to %.2f%c",degree, out, 'F');
    }

}

/* converter */
void ex_3_8(void){
    char unit;
    float item;
    printf("Enter a quantity: ");
    scanf("%f%c", &item,&unit);
    if (unit=='M'){
        printf("The distance %.1f miles converts to %.1f kilometers", item, item*1.609);
    }
    else if (unit=='K'){
        printf("The distance %.1f kilomenters converts to %.1f miles", item, item/1.609);
    }
    else if (unit=='P'){
        printf("The weight %.1f pounds converts to %.1f kilograms", item, item*0.454);
    }
    else if (unit=='G'){
        printf("The weight %.1f kilograms converts to %.1f pounds", item, item/0.454);
    }

}
/* number adder */
void number_reader(void){
    int input;
    int counter = 0;
    printf("Enter a series of numbers seperated by spaces, follwed by control+d: ");
    while (scanf("%d", &input) == 1){
        counter += input;
    }
    printf("The numbers add up to: %d", counter);
}

/* fibanacii formula */
int fib(int days){
    int iteration,first,second,temp;
    for (iteration = 1;iteration <= days; iteration++){
        if (iteration == 1||iteration == 2){
            first = 1;
            second = 1;
        }
        else{
            temp = second+first;
            first = second;
            second = temp;
        }
    }
    return second;

}

/* fib-driver */
void ex_4_3(void){
    int input;
    printf("Calculates the nth fibanaci number: ");
    scanf("%d", &input);
    printf("%d", fib(input));
}

int main(void){
    int rand;
    ex_4_3();
    scanf("%s", &rand);
    return 0;

}
