#include <stdio.h>
int main() {
    int days, weeks, remaining_days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    weeks = days / 7;
    remaining_days = days % 7;
    printf("%d days is equivalent to %d week(s) and %d day(s)\n", days, weeks, remaining_days);
    return 0;
}