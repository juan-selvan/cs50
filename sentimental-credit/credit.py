from cs50 import get_int

def main():
    number = get_int("Number: ")


    # Getting the length of the number
    spare = number
    len_number = 0
    while (spare > 1):
        spare = spare/10
        len_number += 1

    # Calculating Checksum
    sum1 = []
    sum2 = 0
    sum3 = 0
    for i in range(len_number):

        if i % 2 == 0:
            sum2 += number % 10 #First sum
        else:
            sum1.append(2 * number % 10)

        number = (number - number % 10) / 10

    # Second sum
    for sum in sum1:
        if sum < 10:
            sum3 += sum
        else:
            sum3 += (sum - sum % 10) / 10 + sum % 10

    sum = sum2 + sum3

    # Evaluating based on sum
    if sum % 10 == 0:
        checksum = True
    else:
        checksum = False
        print("INVALID")
        exit(1)

    if first2(number) in [34,37] and len_number == 15:
        print("AMEX")
    elif first2(number) in [51, 52, 53, 54, 55] and len_number == 16:
        print("MASTERCARD")
    elif first(number) == 4 and len_number in [13,16]:
        print("VISA")



def first(number):
    while(number > 10):
        number = (number - number % 10) / 10
    return int(number)

def first2(number):
    while(number > 100):
        number = (number - number % 10) / 10
    return int(number)


main()