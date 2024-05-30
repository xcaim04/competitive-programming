# https://dmoj.uclv.edu.cu/problem/22psn3d

testCase = int(input())

while testCase:

    text = input()
    Zs = 0

    for letter in text:
        if letter == 'z' or letter == 'Z':
            Zs += 1

    if Zs >= 3:
        print('Time to take a nap.')
    else:
        print('Perry saves the day!')


    testCase -= 1
