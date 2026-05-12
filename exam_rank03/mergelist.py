from typing import List

def mergeList(l: List[List[int]], l2: List[List[int]]) -> List[List[int]]:
    if l is None:
        return sorted(l2)
    if l2 is None:
        return sorted(l)

    final_list = []
    for i in l:
        final_list.append(i)
    for i in l2:
        final_list.append(i)
    return sorted(final_list)

if __name__ == "__main__":
    print(mergeList([1, 3, 5, -1], [0, 8, 2, 1]))
    print(mergeList([99, -22, 10, 9], []))
    print(mergeList([4, 2], [1, 3]))
    print(mergeList(None, [5, 3, 1]))
    print(mergeList([], []))
    print(mergeList([1,1,1,1], [1,1]))