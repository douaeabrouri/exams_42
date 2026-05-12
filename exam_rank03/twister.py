from typing import List
from collections import deque

def twister(list : List[int], n: int):
    new_list = deque(list)
    new_list.rotate(n)
    return new_list

print(twister([1, 2, 3, 4, 5], 2))
print(twister([4, 2, 1, -1, 'a'], 4))
print(twister([1, 2, 3], 3))
print(twister([1, 2, 3], 5))
print(twister([1, 2, 3, 4], -1))
print(twister([] , 3))
print(twister([1], 10))