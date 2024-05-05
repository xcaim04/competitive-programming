def main():

    data = input().split(" ")
    n, k = int(data[0]), int(data[1])

    rates = map(int, input().split(" "))
    rates = list(rates)

    ans_res = list(filter(lambda x: x >= rates[k-1] and x!= 0,rates))
    return len(ans_res)

if __name__ == "__main__":
    count_finals = main()
    print(count_finals)