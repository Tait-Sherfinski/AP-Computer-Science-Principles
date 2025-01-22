import time

class SearchAlgorithms:
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
            if list[mid] == target:
                return mid
            elif list[mid] < target:
                low = mid + 1
            else:
                high = mid - 1
        return -1

def main():
    try:
        data = []
        with open("data/Prog408b.dat", 'r') as f:
            data = [int(line) for line in f]
        target = int(input("Enter number to be searched: "))
        start_time1 = time.perf_counter()
        Lresult = SearchAlgorithms.linear_search(data, target)
        end_time1 = time.perf_counter()
        print("Linear search(unsorted): Number found at index ", str(Lresult))
        print(f"{end_time1-start_time1:.8f}")
        
        sorted_list = data.sort()

        start_time2 = time.perf_counter()
        SLresult = SearchAlgorithms.linear_search(sorted_list, target)
        end_time2 = time.perf_counter()
        print("Linear search(sorted): Number found at index ", str(SLresult))
        print(f"{end_time2-start_time2:.8f}")

        start_time3 = time.perf_counter()
        Bresult = SearchAlgorithms.binary_search(sorted_list, target)
        end_time3 = time.perf_counter()
        print("Binary search: Number found at index ", str(Bresult))
        print(f"{end_time3-start_time3:.8f}")
            
    except Exception as e:
        print("Error:", e)

if __name__ == "__main__":
    main()