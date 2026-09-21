
def constellation_mapper(stars: list[tuple[int, int]], dim: int) -> list[str]:
 
    starts_list = []
    j = 0
    while j < dim:
        string = ""
        i = 0
        while i < dim:
            if (j, i) in stars:
                string += "*"
            else:
                string += "."
            i += 1
        starts_list.append(string)
        j += 1
    return starts_list

print(constellation_mapper([(1, 0), (1, 1), (1, 2)], 3))

#constellation_mapper([(0, 0), (1, 1), (2, 2)], 3)

#constellation_mapper([(1, 1), (0, 1), (2, 1), (1, 0), (1, 2)], 3)

#constellation_mapper([], 2)

#constellation_mapper([(0, 0), (0, 0), (1, 1)], 2)

#constellation_mapper([(0, 0), (5, 5)], 3)

#constellation_mapper([(1, 0), (1, 1), (1, 2)], 3)