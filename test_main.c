#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int test_case(const char *str, ...)
{
    va_list args;
    int ret_ft;
    int ret_original;

    va_start(args, str);
    
    printf("Original printf output: ");
    ret_original = vprintf(str, args);
    va_end(args);

    va_start(args, str);
    printf("ft_printf output: ");
    ret_ft = ft_printf(str, args);
    va_end(args);

    printf(" | Return ft_printf: %d, Return original printf: %d\n", ret_ft, ret_original);

    if (ret_ft == ret_original)
    {
        printf("Test passed!\n");
        return 1;
    }
    else
    {
        printf("Test failed.\n");
        return 0;
    }
}

int main(void)
{
    int passed_tests = 0;
    int total_tests = 5;

    printf("\nTesting %%c:\n");
    passed_tests += test_case("Character: %c\n", 'A');

    printf("\nTesting %%s:\n");
    passed_tests += test_case("String: %s\n", "If only there was certainty...");

    printf("\nTesting %%d and %%i:\n");
    passed_tests += test_case("Decimal: %d, Integer: %i\n", 111, -111);

    printf("\nTesting %%u:\n");
    passed_tests += test_case("Unsigned: %u\n", 4294967295U);

    printf("\nTesting %%x and %%X:\n");
    passed_tests += test_case("Hex lowercase: %x, Hex uppercase: %X\n", 255, 255);

    printf("\nTest passed: %d/%d\n", passed_tests, total_tests);
    return (0);
}
