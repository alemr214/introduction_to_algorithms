import sys


def insertion_sort(arr: list[int]):
    for index in range(len(arr[1:])):
        key = arr[index]
        j = index - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j = j - 1

        arr[j + 1] = key


def main() -> None:
    data: list[str] = sys.stdin.read().split()
    n: int = int(data[0])
    arr: list[int] = list(map(int, data[1 : 1 + n]))
    insertion_sort(arr)
    print(" ".join(map(str, arr)))


if __name__ == "__main__":
    main()
