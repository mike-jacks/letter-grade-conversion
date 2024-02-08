from enum import Enum, auto

class LetterGrade(Enum):
    A = auto()
    B = auto()
    C = auto()
    D = auto()
    F = auto()

class School:
    def __init__(self):
        pass

    def calculate_letter_grade(grade_percentage: int) -> LetterGrade:
        match grade_percentage:
            case grade_percentage >= 90:
                return LetterGrade.A
            case grade_percentage >= 80:
                return LetterGrade.B
            case grade_percentage >= 70:
                return LetterGrade.C
            case grade_percentage >= 60:
                return LetterGrade.D
            case grade_percentage < 60:
                return LetterGrade.F
            case _:
                return "Invalid grade percentage"

def main():
    school = School()
    grade = school.calculate_letter_grade(78)
    print(grade)
    print(grade.value)

if __name__ == "__main__":
    main()
