# Import sorting library, helper class
Import time

def main():
    try:
        data = []
        with open("data/prog408a.dat", 'r') as f:
            lines = f.readlines()
            for line in lines:
                id, score = line.split(' ')
                id = int(id)
                score = int(score)
                # make helper class objects and add them to data
        # code here
        ...
    except Exception as e:
        print("Error:", e)
    pass


if __name__ == "__main__":
    main()