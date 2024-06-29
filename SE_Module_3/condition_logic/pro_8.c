#include <stdio.h>

int main() {
    float height;

    // Accept the height from the user
    printf("Enter the height of the person in centimeters: ");
    scanf("%f", &height);

    // Categorize the person according to their height
    if (height < 150.0) {
        printf("The person is categorized as Dwarf.\n");
    } else if (height >= 150.0 && height <= 165.0) {
        printf("The person is categorized as Average height.\n");
    } else if (height > 165.0 && height <= 195.0) {
        printf("The person is categorized as Tall.\n");
    } else {
        printf("The person is categorized as Very Tall.\n");
    }

    return 0;
}

