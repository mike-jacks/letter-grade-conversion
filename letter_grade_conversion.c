#include <stdio.h>

// Define an enum for letter grades
typedef enum {
    A = 1, B, C , D, F // Enum values will be assigned automatically starting from 0
} LetterGrade;


// Function to convert grade percentage to LetterGrade enum
LetterGrade calculate_letter_grade(int grade_percentage) {
    if (grade_percentage >= 90) {
        return A;
    } else if (grade_percentage >= 80) {
        return B;
    } else if (grade_percentage >= 70) {
        return C;
    } else if (grade_percentage >= 60) {
        return D;
    } else {
        return F;
    }
}

// Function to convert LetterGrade enum to a character

char get_grade_char(LetterGrade grade) {
    switch (grade) {
        case A: return 'A';
        case B: return 'B';
        case C: return 'C';
        case D: return 'D';
        case F: return 'F';
        default: return '?'; // Just in case something goes wrong
    }
}

int main() {
    int grade_percentage = 78;
    LetterGrade grade = calculate_letter_grade(grade_percentage);

    // Print the enum value as an integer
    printf("Letter Grade Enum (int): %d\n", grade);

    // Print the enum value as a character
    printf("Letter Grade: %c\n", get_grade_char(grade));

    return 0;
}
