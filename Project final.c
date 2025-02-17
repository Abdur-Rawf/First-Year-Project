#include <stdio.h>
#include <math.h>
#include<time.h>
#include<string.h>


void lengthConversion();
void weightConversion();
void temperatureConversion();
void volumeConversion();
void history();
void clearHistory();
void currencyConversion();

int main() {
    int choice,l;


     time_t t;
    time(&t);

    FILE *f;
    f=fopen("File12.txt","a");
    fprintf(f,"\n            Opening Date and Time:");
    fprintf(f,"\n            %s",ctime(&t));
    fclose(f);
      printf("\n....Conversion Calculator.....\n");


    while (1) {
        system("cls");
        printf("\n....Main Menu.....\n");
        printf("1. Length Conversion\n");
        printf("2. Weight Conversion\n");
        printf("3. Temperature Conversion\n");
        printf("4. Volume Conversion\n");
        printf("5. Currency Conversion\n");
        printf("6. History\n");
        printf("7. Clear History\n");
        printf("8. Exit\n");
        printf("Select a option: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                lengthConversion();
                printf("\nPlease Enter Any Number Key for Main Menu: ");
                scanf("%d",&l);
                break;
            case 2:
                weightConversion();
                 printf("\nPlease Enter Any Number Key for Main Menu: ");
                scanf("%d",&l);
                break;
            case 3:
                temperatureConversion();
                 printf("\nPlease Enter Any Number Key for Main Menu: ");
                scanf("%d",&l);
                break;
            case 4:
                volumeConversion();
                 printf("\nPlease Enter Any Number Key for Main Menu: ");
                scanf("%d",&l);
                break;
            case 5:
                currencyConversion();
                 printf("\nPlease Enter Any Number Key for Main Menu: ");
                scanf("%d",&l);
                break;

             case 6:
                 history();
                 printf("\nPlease Enter Any Number Key for Main Menu: ");
                scanf("%d",&l);
                break;
            case 7:
                clearHistory();
                 printf("\nPlease Enter Any Number Key for Main Menu: ");
                scanf("%d",&l);
                break;

            case 8:
                printf("Exiting the Calculator.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
                 printf("Please Enter Any Number Key for Main Menu: ");
                scanf("%d",&l);
        }
    }
}

void lengthConversion() {
    system("cls");
    float meters, kilometers, feet, inches, miles, centimeters;
    int choice;
    FILE *file;
    file=fopen("File12.txt","a");

    printf("\n.... Length Conversion ....\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Feet to Inches\n");
    printf("4. Inches to Feet\n");
    printf("5. Meters to Miles\n");
    printf("6. Miles to Meters\n");
    printf("7. Centimeters to Meters\n");
    printf("8. Meters to Centimeters\n");
    printf("Select a option: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter meters: ");
            scanf("%f", &meters);
            printf("%.2f meters = %.2f kilometers\n", meters, meters / 1000);
            fprintf(file,"%.2f meters = %.2f kilometers\n", meters, meters / 1000);
            break;
        case 2:
            printf("Enter kilometers: ");
            scanf("%f", &kilometers);
            printf("%.2f kilometers = %.2f meters\n", kilometers, kilometers * 1000);
            fprintf(file,"%.2f kilometers = %.2f meters\n", kilometers, kilometers * 1000);
            break;
        case 3:
            printf("Enter feet: ");
            scanf("%f", &feet);
            printf("%.2f feet = %.2f inches\n", feet, feet * 12);
            fprintf(file,"%.2f feet = %.2f inches\n", feet, feet * 12);
            break;
        case 4:
            printf("Enter inches: ");
            scanf("%f", &inches);
            printf("%.2f inches = %.2f feet\n", inches, inches / 12);
            fprintf(file,"%.2f inches = %.2f feet\n", inches, inches / 12);
            break;
        case 5:
            printf("Enter meters: ");
            scanf("%f", &meters);
            printf("%.2f meters = %.2f miles\n", meters, meters / 1609.34);
            fprintf(file,"%.2f meters = %.2f miles\n", meters, meters / 1609.34);
            break;
        case 6:
            printf("Enter miles: ");
            scanf("%f", &miles);
            printf("%.2f miles = %.2f meters\n", miles, miles * 1609.34);
            fprintf(file,"%.2f miles = %.2f meters\n", miles, miles * 1609.34);
            break;
        case 7:
            printf("Enter centimeters: ");
            scanf("%f", &centimeters);
            printf("%.2f centimeters = %.2f meters\n", centimeters, centimeters / 100);
            fprintf(file,"%.2f centimeters = %.2f meters\n", centimeters, centimeters / 100);
            break;
        case 8:
            printf("Enter meters: ");
            scanf("%f", &meters);
            printf("%.2f meters = %.2f centimeters\n", meters, meters * 100);
            fprintf(file,"%.2f meters = %.2f centimeters\n", meters, meters * 100);
            break;
        default:
            printf("Invalid choice!\n");

    }
     fclose(file);
}

void weightConversion() {
    FILE *file;
    file=fopen("File12.txt","a");
    float grams, kilograms, pounds, ounces, stones;
    int choice;

    system("cls");
    printf("\n.... Weight Conversion .....\n");
    printf("1. Grams to Kilograms\n");
    printf("2. Kilograms to Grams\n");
    printf("3. Pounds to Ounces\n");
    printf("4. Ounces to Pounds\n");
    printf("5. Kilograms to Pounds\n");
    printf("6. Pounds to Kilograms\n");
    printf("7. Stones to Pounds\n");
    printf("8. Pounds to Stones\n");
    printf("Select a option: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter grams: ");
            scanf("%f", &grams);
            printf("%.2f grams = %.2f kilograms\n", grams, grams / 1000);
            fprintf(file,"%.2f grams = %.2f kilograms\n", grams, grams / 1000);
            break;
        case 2:
            printf("Enter kilograms: ");
            scanf("%f", &kilograms);
            printf("%.2f kilograms = %.2f grams\n", kilograms, kilograms * 1000);
            fprintf(file,"%.2f kilograms = %.2f grams\n", kilograms, kilograms * 1000);
            break;
        case 3:
            printf("Enter pounds: ");
            scanf("%f", &pounds);
            printf("%.2f pounds = %.2f ounces\n", pounds, pounds * 16);
            fprintf(file,"%.2f pounds = %.2f ounces\n", pounds, pounds * 16);
            break;
        case 4:
            printf("Enter ounces: ");
            scanf("%f", &ounces);
            printf("%.2f ounces = %.2f pounds\n", ounces, ounces / 16);
            fprintf(file,"%.2f ounces = %.2f pounds\n", ounces, ounces / 16);
            break;
        case 5:
            printf("Enter kilograms: ");
            scanf("%f", &kilograms);
            printf("%.2f kilograms = %.2f pounds\n", kilograms, kilograms * 2.20462);
            fprintf(file,"%.2f kilograms = %.2f pounds\n", kilograms, kilograms * 2.20462);
            break;
        case 6:
            printf("Enter pounds: ");
            scanf("%f", &pounds);
            printf("%.2f pounds = %.2f kilograms\n", pounds, pounds / 2.20462);
            fprintf(file,"%.2f pounds = %.2f kilograms\n", pounds, pounds / 2.20462);
            break;
        case 7:
            printf("Enter stones: ");
            scanf("%f", &stones);
            printf("%.2f stones = %.2f pounds\n", stones, stones * 14);
            fprintf(file,"%.2f stones = %.2f pounds\n", stones, stones * 14);
            break;
        case 8:
            printf("Enter pounds: ");
            scanf("%f", &pounds);
            printf("%.2f pounds = %.2f stones\n", pounds, pounds / 14);
            fprintf(file,"%.2f pounds = %.2f stones\n", pounds, pounds / 14);
            break;
        default:
            printf("Invalid choice!\n");
    }
    fclose(file);
}

void temperatureConversion() {
    float celsius, fahrenheit, kelvin;
    int choice;
    FILE *file;
    file=fopen("File12.txt","a");

    system("cls");
    printf("\n.... Temperature Conversion ....\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Select a option: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Celsius: ");
            scanf("%f", &celsius);
            printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, (celsius * 9 / 5) + 32);
            fprintf(file,"%.2f Celsius = %.2f Fahrenheit\n", celsius, (celsius * 9 / 5) + 32);
            break;
        case 2:
            printf("Enter Fahrenheit: ");
            scanf("%f", &fahrenheit);
            printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, (fahrenheit - 32) * 5 / 9);
            fprintf(file,"%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, (fahrenheit - 32) * 5 / 9);
            break;
        case 3:
            printf("Enter Celsius: ");
            scanf("%f", &celsius);
            printf("%.2f Celsius = %.2f Kelvin\n", celsius, celsius + 273.15);
            fprintf(file,"%.2f Celsius = %.2f Kelvin\n", celsius, celsius + 273.15);
            break;
        case 4:
            printf("Enter Kelvin: ");
            scanf("%f", &kelvin);
            printf("%.2f Kelvin = %.2f Celsius\n", kelvin, kelvin - 273.15);
            fprintf(file,"%.2f Kelvin = %.2f Celsius\n", kelvin, kelvin - 273.15);
            break;
        case 5:
            printf("Enter Fahrenheit: ");
            scanf("%f", &fahrenheit);
            printf("%.2f Fahrenheit = %.2f Kelvin\n", fahrenheit, (fahrenheit - 32) * 5 / 9 + 273.15);
            fprintf(file,"%.2f Fahrenheit = %.2f Kelvin\n", fahrenheit, (fahrenheit - 32) * 5 / 9 + 273.15);
            break;
        case 6:
            printf("Enter Kelvin: ");
            scanf("%f", &kelvin);
            printf("%.2f Kelvin = %.2f Fahrenheit\n", kelvin, (kelvin - 273.15) * 9 / 5 + 32);
            fprintf(file,"%.2f Kelvin = %.2f Fahrenheit\n", kelvin, (kelvin - 273.15) * 9 / 5 + 32);
            break;
        default:
            printf("Invalid choice!\n");
    }
    fclose(file);
}

void volumeConversion() {
    float liters, gallons, milliliters, cubicMeters;
    int choice;
    FILE *file;
    file=fopen("File12.txt","a");

    system("cls");

    printf("\n.... Volume Conversion ....\n");
    printf("1. Liters to Gallons\n");
    printf("2. Gallons to Liters\n");
    printf("3. Milliliters to Liters\n");
    printf("4. Liters to Milliliters\n");
    printf("5. Cubic Meters to Liters\n");
    printf("6. Liters to Cubic Meters\n");
    printf("Select a option: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter liters: ");
            scanf("%f", &liters);
            printf("%.2f liters = %.2f gallons\n", liters, liters / 3.78541);
            fprintf(file,"%.2f liters = %.2f gallons\n", liters, liters / 3.78541);
            break;
        case 2:
            printf("Enter gallons: ");
            scanf("%f", &gallons);
            printf("%.2f gallons = %.2f liters\n", gallons, gallons * 3.78541);
            fprintf(file,"%.2f gallons = %.2f liters\n", gallons, gallons * 3.78541);
            break;
        case 3:
            printf("Enter milliliters: ");
            scanf("%f", &milliliters);
            printf("%.2f milliliters = %.2f liters\n", milliliters, milliliters / 1000);
            fprintf(file,"%.2f milliliters = %.2f liters\n", milliliters, milliliters / 1000);
            break;
        case 4:
            printf("Enter liters: ");
            scanf("%f", &liters);
            printf("%.2f liters = %.2f milliliters\n", liters, liters * 1000);
            fprintf(file,"%.2f liters = %.2f milliliters\n", liters, liters * 1000);
            break;
        case 5:
            printf("Enter cubic meters: ");
            scanf("%f", &cubicMeters);
            printf("%.2f cubic meters = %.2f liters\n", cubicMeters, cubicMeters * 1000);
            fprintf(file,"%.2f cubic meters = %.2f liters\n", cubicMeters, cubicMeters * 1000);
            break;
        case 6:
            printf("Enter liters: ");
            scanf("%f", &liters);
            printf("%.2f liters = %.2f cubic meters\n", liters, liters / 1000);
            fprintf(file,"%.2f liters = %.2f cubic meters\n", liters, liters / 1000);
            break;
        default:
            printf("Invalid choice!\n");
    }
    fclose(file);
}

void history() {
    system("cls");
    int tt;
    printf("\n.... History ....\n");
    printf("1. Search By Date.\n");
    printf("2.Show All.\n");
     printf("Select a option: ");
    scanf("%d",&tt);
    if(tt==1)
     {
    FILE *file;
    char line[256], dateInput[8];
    int found = 0;


    printf("Enter the date (Like as, Oct 24): ");
    scanf(" %[^\n]", dateInput);

    file = fopen("File12.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("History for %s:\n", dateInput);

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, "Opening Date and Time:") != NULL) {
            fgets(line, sizeof(line), file);
            if (strstr(line, dateInput) != NULL) {
                found = 1;
                printf("%s", line);

                while (fgets(line, sizeof(line), file) && strstr(line, "Opening Date and Time:") == NULL) {
                    printf("%s", line);
                }
                printf("\n");
            }
        }
    }

    if (!found) {
        printf("No history found for the date %s.\n", dateInput);
    }

    fclose(file);
}
else if(tt==2)
    {
                 FILE *file;
                 file=fopen("File12.txt","r");
                 while(!feof(file))
                 {
                     char ch=fgetc(file);
                     printf("%c",ch);
                 }
                 fclose(file);
}
else
    printf("Invalid Choice!\n");

}


void clearHistory(){
                 FILE *file;
                 file=fopen("File12.txt","w");
                 printf("History is Cleared\n");
                 fclose(file);


}
void currencyConversion() {
    float foreignAmount, result;
    int choice;
    FILE *file;
    file = fopen("File12.txt", "a");

    system("cls");
    printf("\n.... Currency Conversion ....\n");
    printf("1. USD (US Dollar) to BDT\n");
    printf("2. INR (Indian Rupee) to BDT\n");
    printf("3. PKR (Pakistani Rupee) to BDT\n");
    printf("4. NPR (Nepalese Rupee) to BDT\n");
    printf("5. LKR (Sri Lankan Rupee) to BDT\n");
    printf("6. MVR (Maldivian Rufiyaa) to BDT\n");
    printf("7. BTN (Bhutanese Ngultrum) to BDT\n");
    printf("8. AFN (Afghan Afghani) to BDT\n");
    printf("9. JPY (Japanese Yen) to BDT\n");
    printf("10. KRW (South Korean Won) to BDT\n");
    printf("Select a currency option: ");
    scanf("%d", &choice);

    printf("Enter the amount: ");
    scanf("%f", &foreignAmount);

    switch (choice) {
        case 1:
            result = foreignAmount * 109.5;
            printf("%.2f USD = %.2f BDT\n", foreignAmount, result);
            fprintf(file, "%.2f USD = %.2f BDT\n", foreignAmount, result);
            break;
        case 2:
            result = foreignAmount * 1.2;
            printf("%.2f INR = %.2f BDT\n", foreignAmount, result);
            fprintf(file, "%.2f INR = %.2f BDT\n", foreignAmount, result);
            break;
        case 3:
            result = foreignAmount * 0.95;
            printf("%.2f PKR = %.2f BDT\n", foreignAmount, result);
            fprintf(file, "%.2f PKR = %.2f BDT\n", foreignAmount, result);
            break;
        case 4:
            result = foreignAmount * 0.65;
            printf("%.2f NPR = %.2f BDT\n", foreignAmount, result);
            fprintf(file, "%.2f NPR = %.2f BDT\n", foreignAmount, result);
            break;
        case 5:
            result = foreignAmount * 2.8;
            printf("%.2f LKR = %.2f BDT\n", foreignAmount, result);
            fprintf(file, "%.2f LKR = %.2f BDT\n", foreignAmount, result);
            break;
        case 6:
            result = foreignAmount * 7.0;
            printf("%.2f MVR = %.2f BDT\n", foreignAmount, result);
            fprintf(file, "%.2f MVR = %.2f BDT\n", foreignAmount, result);
            break;
        case 7:
            result = foreignAmount * 1.2;
            printf("%.2f BTN = %.2f BDT\n", foreignAmount, result);
            fprintf(file, "%.2f BTN = %.2f BDT\n", foreignAmount, result);
            break;
        case 8:
            result = foreignAmount * 11.0;
            printf("%.2f AFN = %.2f BDT\n", foreignAmount, result);
            fprintf(file, "%.2f AFN = %.2f BDT\n", foreignAmount, result);
            break;
        case 9:
            result = foreignAmount * 0.78;
            printf("%.2f JPY = %.2f BDT\n", foreignAmount, result);
            fprintf(file, "%.2f JPY = %.2f BDT\n", foreignAmount, result);
            break;
        case 10:
            result = foreignAmount * 0.084;
            printf("%.2f KRW = %.2f BDT\n", foreignAmount, result);
            fprintf(file, "%.2f KRW = %.2f BDT\n", foreignAmount, result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    fclose(file);
}







