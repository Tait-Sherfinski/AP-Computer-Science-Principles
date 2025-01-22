import time
from SortingAlgorithm import SortingAlgorithms

class IDScore:
    def __init__(self, id, score):
        self.id = id
        self.score = score

    def __lt__(self, other):
        return self.score < other.score

    def __repr__(self):
        return f"({self.id}, {self.score})"

def main():
    try:
        data = []
        with open("data/prog408a.dat", 'r') as f:
            lines = f.readlines()
            for line in lines:
                id, score = line.split(' ')
                id = int(id)
                score = int(score)
        data.append(IDScore(id, score))
        bubbleData = list(data)
        selectionData = list(data)
        insertionData = list(data)
        builtinData = list(data)
        sortingMethods = [
            ("Bubble Sort", SortingAlgorithms.bubbleSort, bubbleData),
            ("Selection Sort", SortingAlgorithms.selectionSort, selectionData),
            ("Insertion Sort", SortingAlgorithms.insertionSort, insertionData),
            ("Built-in Sort", lambda x: x.sort(reverse=True), builtinData),
        ]

        results = []
        for name, method, dataset in sortingMethods:
            start_time = time.perf_counter()
            method(dataset)
            end_time = time.perf_counter()
            results.append((name, dataset, end_time - start_time))

        for name, sorted_data, duration in results:
            print(f"{name}: ")
            print(sorted_data)
            print(f"Duration: {duration:.8f} seconds")
        ...
    except Exception as e:
        print("Error:", e)
    pass


if __name__ == "__main__":
    main()