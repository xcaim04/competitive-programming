# https://dmoj.uclv.edu.cu/problem/raz

def get_N():
    valueToGet = int(input())
    return valueToGet


def find_mult():

    """ Find out multiplys from number """

    number = get_N()

    iterator = 2

    listOfNumbers = [1, number]

    while iterator < number:
        if(number % iterator == 0):
            listOfNumbers.append(iterator)
        iterator += 1

    listOfNumbers.sort()
    
    return listOfNumbers



def find_numbers():

    """ Find numbers with the min difference on the list """

    mult = find_mult()

    number = mult[-1]

    result = [0, 0, 1000005]

    for val in mult:

        if number/val in mult:

            if( result[2] > abs(number//val - val) ):

                result[2] = abs(number//val - val)
                result[0] = val
                result[1] = number//val
                
    print(f'{result[0]} {result[1]}')

find_numbers()