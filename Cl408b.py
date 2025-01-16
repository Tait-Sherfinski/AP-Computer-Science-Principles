class SortingAlgorithms:
    
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
            elif list[mid] > x:
                high = mid - 1
            else:
                return mid
        return -1
        
