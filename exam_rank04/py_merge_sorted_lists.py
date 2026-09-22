
def merge(a: list[int]) -> list[int]:
    i = 0

    while i < len(a) - 1:
        if a[i] > a[i + 1]:
            tmp = a[i]
            a[i] = a[i + 1]
            a[i + 1] = tmp
            i = 0
        else:
            i += 1
    return a
    

def merge_sorted_lists(lists: list[list[int]]) -> list[int]:

    # for i in range(len(lists)):
    #     if not lists[i]:
    #         return []
    new_list = []
    l = []
    i = 0
    while(i < len(lists)):
        if lists[i]:
            l += lists[i]
        i+=1

    if not l:
        return []

    new_list = merge(l)
    return new_list

print(merge_sorted_lists([[], [1, 2, 3]]))