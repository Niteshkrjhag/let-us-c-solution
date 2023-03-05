#include<stdio.h>
void print_words(int num);

int main() {
    int num;
    printf("Enter a 9-digit number: ");
    scanf("%d", &num);
    print_words(num);
    return 0;
}

void print_words(int num) {
    if(num >= 1000000000) {
        print_words(num/1000000000);
        printf(" Billion ");
        num %= 1000000000;
    }
    if(num >= 1000000) {
        print_words(num/1000000);
        printf(" Million ");
        num %= 1000000;
    }
    if(num >= 1000) {
        print_words(num/1000);
        printf(" Thousand ");
        num %= 1000;
    }
    if(num >= 100) {
        print_words(num/100);
        printf(" Hundred ");
        num %= 100;
    }
    if(num > 0) {
        if(num < 20) {
            char *arr[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                            "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
            printf("%s", arr[num]);
        } else {
            char *arr[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
            printf("%s ", arr[num/10]);
            if(num%10) {
                printf("%s", arr[num%10]);
            }
        }
    }
}
