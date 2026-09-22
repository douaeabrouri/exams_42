
def list_intersection_finder(lists: list[list[int]]) -> list[int]:

    if not lists:
        return []
 
    for lst in lists:
        if not list:
            return []
    i = 0
    new_list = []
    while(i < len(lists)):
        lists[i].sort()
        new_list.append(set(lists[i]))
        # print(new_list[i])
        i += 1
    
    result = new_list[0]
    i = 1
    while(i < len(new_list)):
        result = result & new_list[i]
        i += 1
    # print(sorted(result))
    return sorted(result)

print(list_intersection_finder([[5]]))

#list_intersection_finder([[1, 2, 3], [2, 3,3, 4], [8, 3, 5]])
#print(list_intersection_finder([[1, 2, 3, 4], [2, 4, 6, 8], [4, 8, 12]]))
#list_intersection_finder([[1, 1, 2, 3], [1, 2, 2, 3], [1, 2, 2, 3]])
#list_intersection_finder([[1, 2, 3], [4, 5, 6]])
#list_intersection_finder([])