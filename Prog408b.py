import time
from Cl408b import SortingAlgorithms

def main():
    try:
        data = []
        with open("data/Prog408b.dat", 'r') as f:
            data = [int(line) for line in f]
        target = int(input("Enter the number to search: "))
        result = binary_search(data, target)
        print("Element found at index ", str(result))
    except Exception as e:
        print("Error:", e)
    pass