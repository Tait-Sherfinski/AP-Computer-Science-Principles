from time import time
# from Cl408b import Cl408b

def linear_search(list, target):
    for index in range(len(list)):
        if list[index] == target:
            return index
    return -1

def binary_search(list, target):
    low = 0
    high = len(list) - 1
    mid = 0
    while low <= high:
        mid = (high + low) // 2
        if list[mid] < target:
            low = mid + 1
        elif list[mid] > target:
            high = mid - 1
        else:
            return mid
    return -1

def main():
    try:
        data = []
        with open("data/Prog408b.dat", 'r') as f:
            data = [int(line) for line in f]
        target = int(input("Enter number to be searched: "))
        t0 = time()
        Lresult = linear_search(data, target)
        t1 = time()
        Bresult = binary_search(data, target)
        t2 = time()
        print("Linear search(unsorted): Number found at index ", str(Lresult))
        print("Search time: ", (t1-t0))
        print("Binary search: Number found at index ", str(Bresult))
        print("Search time: ", (t2-t1))
    except Exception as e:
        print("Error:", e)
    pass

if __name__ == "__main__":
    main()