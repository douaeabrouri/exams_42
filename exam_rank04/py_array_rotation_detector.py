

def array_rotation_detector(arr1: list, arr2: list) -> bool:

    if len(arr2) != len(arr1):
        return False

    if len(arr1) == 0:
        return True
    
    rotation = []
    i = 0
    while (i < len(arr1)):
        rotation = arr1[i:] + arr1[:i]

        if rotation == arr2:
            return True
        i += 1
    return False


def main():
    print(array_rotation_detector([1, 2, 3, 4, 5], [4, 5, 1, 2, 3])
)
main()
#array_rotation_detector([1, 2, 3, 4, 5], [4, 5, 1, 2, 3])

#array_rotation_detector([1, 2, 3, 4, 5], [5, 1, 2, 3, 4])

#array_rotation_detector([1, 2, 3], [3, 2, 1])

#array_rotation_detector([1, 2], [1, 2, 3])

#array_rotation_detector([], [])
