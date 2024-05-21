#include <stdio.h>

int main()
{

    char input;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometers = 0.0254;
    float first, second;

    while (1)

    {

        printf("enter the input character. q to quit\n            1.kms to miles\n       2.inches to foot\n         3.cms to inches \n         4.pound to kgs\n       5.inches to meters\n");
        scanf("%c", &input);
        switch (input)

        {

        case 'q':

            printf("queating the program.....");
            goto end;
            break;

        case '1':
            printf("enter quentity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf("%.2f kms is equal to %.2f miles\n\n\n", first, second);
            break;

        case '2':
            printf("enter quentity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%f inches is equal to %f foot\n", first, second);
            break;

        case '3':
            printf("enter quentity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmstoinches;
            printf("%f cms is equal to %f inches \n", first, second);
            break;

        case '4':

            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundtokgs;

            printf("%fpound is equal to kgs %f \n ", first, second);
            break;

        case '5':

            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchestometers;
            printf("%f inches is equal to %f meter \n", first, second);
            break;

        default:
            printf("in default now ");
            break;
        }
    }
end:
    return 0;
}
