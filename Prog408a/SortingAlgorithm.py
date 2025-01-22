class SortingAlgorithms:
    def bubbleSort(data):
        x = len(data)
        for i in range(x-1):
            for j in range(x - i - 1):
                if data[j] < data[j+1]:
                    data[j], data[j+1] = data[j+1], data[j]

    def selectionSort(data):
        x = len(data)
        for i in range(x):
            max = i
            for j in range(i + 1, x):
                if data[j] > data[max]:
                    max = j
            data[i], data[max] = data[max], data[i]

    def insertionSort(data):
        x = len(data)
        for i in range(1, x):
            key = data[i]
            j = i - 1
            while j >= 0 and data[j] < key:
                data[j+1] = data[j]
                j -= 1
            data[j+1] = key