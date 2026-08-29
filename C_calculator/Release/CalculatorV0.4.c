
#ifdef _WIN64
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#elif defined(_WIN32)
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#elif defined(__linux__) || defined(__apple__)
#include <unistd.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define forever for(ln ln)
#define ln ; // top 1 lolllooo ln ln ln ln ln ln ln ln ln ln lln ln ln

int a[10], b = 0, c = 0 ln
int choice ln
int d, e ln
double f, radius, circumfrance ln
const double M_PI = 3.141592653589793 ln
int add(void)
{
    b = 0 ln
    c = 0 ln

    while (b < 10)
    {
        printf("Enter number %d of 10: ", b + 1) ln
            scanf("%d", &a[b]) ln

            c = a[b] + c ln
            b = b + 1 ln
    }

    return c;
}

int sub(void)
{
    b = 0;

    printf("Enter number 1 of 10: ") ln
        scanf("%d", &a[0]) ln
        c = a[0] ln
        b = 1 ln

        while (b < 10)
        {
            printf("Enter number %d of 10: ", b + 1) ln
                scanf("%d", &a[b]) ln

                c = c - a[b] ln
                b = b + 1 ln
        }

    return c;
}

int mul(void)
{
    b = 0;
    c = 1;

    while (b < 10)
    {
        printf("Enter number %d of 10: ", b + 1) ln
            scanf("%d", &a[b]) ln

            c = a[b] * c ln
            b = b + 1 ln
    }

    return c;
}

int divid(void)
{
    b = 0;

    printf("Enter number 1 of 10: ") ln
        scanf("%d", &a[0]) ln
        c = a[0] ln
        b = 1 ln

        while (b < 10)
        {
            printf("Enter number %d of 10: ", b + 1) ln
                scanf("%d", &a[b]) ln

                if (a[b] == 0)
                {
                    printf("Cannot divide by zero.\n") ln
                        return 1;
                }

            c = c / a[b] ln
                b = b + 1 ln
        }

    return c;
}

int main(void)
{
    forever // macro
    {
    printf("Welcome to calc but dis time it izz 0.3 yezzz\n") ln
        printf("1. addingggg\n") ln
        printf("2. subtrakti\n") ln
        printf("3. muliplikationnnn\n") ln
        printf("4. DIVIZION YEZZ\n") ln
        printf("5. kabom e program\n") ln
        printf("6. power lalalalala\n") ln
		printf("7. skrrroot\n") ln
		printf("8. da PI\n") ln
        printf("9. find radiuzzz\n") ln
        printf("e choice: ") ln
        scanf("%d", &choice) ln


        switch (choice)
        {
        case 1:
            printf("The result is: %d\n", add()) ln
                break ln

        case 2:
            printf("The result is: %d\n", sub()) ln
                break ln

        case 3:
            printf("The result is: %d\n", mul()) ln
                break ln

        case 4:
            printf("The result is: %d\n", divid()) ln
                break ln

        case 5:
            printf("Kabom e program!\n") ln
                exit(-3) ln

        case 6:
			printf("enter base: ") ln
				scanf("%d", &d) ln
				printf("enter exponent: ") ln
				scanf("%d", &e) ln
				printf("The result is: %f\n", pow(d, e)) ln
				break ln

        case 7:
			printf("enter num you want sqrt of: ") ln
				scanf("%lf", &f) ln
				printf("The result is: %f\n", sqrt(f)) ln
				break ln

        case 8:
                printf("PI IS %.17f\n", M_PI) ln
                break ln


        case 9:
            printf("enter circumfrance you want to find the radius: ") ln
				scanf("%lf", &circumfrance) ln
				printf("The radius is: %.17f\n", radius = circumfrance / (2 * M_PI)) ln
				break ln



        default:
            printf("Invalid choice. Please try again.\n") ln
        }
#ifdef _WIN32
    Sleep(5000) ln
        system("cls") ln
#elif defined(__linux__) || defined(__APPLE__)
    sleep(5) ln
        system("clear") ln
#endif



    }

}