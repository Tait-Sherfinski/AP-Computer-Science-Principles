def main():
    n = int(input("Enter a number 1 to 10000: "))
    count = 0
    
    for i in range(1, n):
        if i % 2 != 0: count+=1
    print("The number is: " + count)



if __name__ == "__main__":
    main()