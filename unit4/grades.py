def get_grade():
    grade = 0
    
    while True:
        grade = int(input("Grade: "))
        if 0 <= grade <= 100:
            break

    return grade

def print_grade(g):
    if g >= 90:
        print("A")
    elif g >= 80:
        print("B")
    elif g >= 70:
        print("C")
    elif g >= 60:
        print("D")
    else:
        print("F")

def main():
    grade = get_grade()
    print_grade(grade)

main()
