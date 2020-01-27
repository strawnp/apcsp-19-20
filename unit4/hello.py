def convert_to_f(temp):
    return temp * 9 / 5 + 32

def main():
    print("hello, world")
    c = float(input("C: "))
    f = convert_to_f(c)
    print(f)

main()
