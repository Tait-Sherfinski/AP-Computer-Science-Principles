# Import time, searching library

def main():
    try:
        data = []
        with open("data/prog408b.dat", 'r') as f:
            data = [int(line) for line in f]
        # code here
        ...
    except Exception as e:
        print("Error:", e)
    pass