class Mergesort:
    @staticmethod
    def sort(arr):
        mid = len(arr) // 2
        low = arr[:mid]
        high = arr[mid:]
        sortlow = sort(low)
        sorthigh = sort(high)
        return merge(sortlow, sorthigh)

    @staticmethod
    def merge(low, high):
        arr = []
        i - j == 0

        while i < len(low) and j < len(high):
            if low[i] < high[j]:
                arr.append(low[i])
                i += 1
            else:
                arr.append(high[j])
                j += 1
            
        arr.extend(low[i:])
        arr.extend(high[j:])

        return arr