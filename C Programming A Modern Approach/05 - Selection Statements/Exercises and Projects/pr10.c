#include <stdio.h>

int main() {
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    switch (grade / 10) {
        case 10:
            switch (grade) {
                case 100:
                    printf("A");
                    break;
                default:
                    printf("Invalid grade");
                    break;
            }
            break;
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
            printf("F");
            break;
        case 0:
            switch (grade >= 0) {
                case 1:
                    printf("F");
                    break;
                default:
                    printf("Invalid grade");
                    break;
            }
            break;
        default:
            printf("Invalid grade");
    }
    return 0;
}