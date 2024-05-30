# https://dmoj.uclv.edu.cu/problem/div3

# Implementando test unitarios y POO

#import unittest

################# Code ##########################

def getData():
    data = input().split(' ')
    return data


def Div_3():
    
    data = getData()

    results = []

    # Primer caso: Solo se usa uno de los digitos

    for digit in data:
        
        current_data = digit

        while int(current_data) % 3 != 0:
            current_data += digit

        results.append(current_data)
    
    # Segundo Caso: Se usan dos de los digitos

    Aux = int(data[0]) + int(data[1])

    if(Aux % 3 == 0):
        results.append( data[0] + data[1] )
        results.append( data[1] + data[0] )

    Aux = int(data[0]) + int(data[2])

    if(Aux % 3 == 0):
        results.append( data[0] + data[2] )
        results.append( data[2] + data[0] )

    Aux = int(data[2]) + int(data[1])

    if(Aux % 3 == 0):
        results.append( data[1] + data[2] )
        results.append( data[2] + data[1] )

    
    # Finalmente, encontrar la mejor de las soluciones

    results = [int(x) for x in results]

    minn = 1000000007

    for value in results:

        if(minn > value):
            minn = value

    return minn

print(Div_3())


################# Tests Unitarios #########################

# class testDiv_3(unittest.TestCase):
#     def test_check_Div_3(self):

#         result = Div_3(['4', '7', '2'])
#         self.assertEqual(result, 24)

#         result = Div_3(['7', '1', '4'])
#         self.assertEqual(result, 111)

# if __name__ == '__main__':
#     unittest.main()
