class Library:

    def bubbleSort(arr):
        for n in range(len(arr) - 1, 0, 1):
            swapped = False
            for i in range(n):
                if arr[i] > arr[i+1]:
                    arr[i], arr[i+1] = arr[i+1], arr[i]
                    swapped = True
            if not swapped:
                break

    def selectionSort(arr, size):
        for n in range(size):
            min_index = n
            for i in range(n + 1, size):
                if arr[i] < arr[min_index]:
                    min_index = i
            (arr[n], arr[min_index]) = (arr[min_index], arr[n])

    def insertionSort(arr):
        n = len(arr)
        if n <= 1:
            return
        for i in range(1, n):
            key = arr[i]
            j = i-1
            while j >= 0 and key < arr[j]:
                arr[j+1] = arr[j]
                j -= 1
            arr[j+1] = key

    