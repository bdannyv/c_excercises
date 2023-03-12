# include <stdio.h>
# include <string.h>
# include <ctype.h>

float get_num (void);
char get_operator (void);
float do_math (float result, float num, char action);

int main (void) {
    // declarin vars
    float num;
    char action;
    float result = 0;
    do 
    {
        // get math operator
        char action = get_operator();

        // get number
        float num = get_num();

        // do math
        result = do_math(result, num, action);
    }
    while
    (
        action != '='
    );

    printf("%lf \n", result);
}

float get_num (void) 
{
    float n;
    do 
    {
        printf("\nEnter a number: ");
        scanf("%f", &n);
    }
    while ( isdigit(n) );

    return n;
}

char get_operator (void) 
{
    char action;
    do 
    {
        printf("\nEnter a math operator:");
        scanf(" %c", &action);
    }
    while (! (action == '+' || action == '-' || action == '/'|| action == '*' || action == '='));

    return action;
}

float do_math (float result, float num, char action) 
{
    if ('+' == action) 
    {
        result += num;
    }
    else if ('-' == action) 
    {
        result -= num;
    }
    else if ('/' == action)
    {
        result /= num;
    }
    else 
    {
        result *= num;
    }
    printf("Intermediate result %f", result); 
    return result;
}