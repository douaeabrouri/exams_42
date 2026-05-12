
from typing import List
def reverseMatrix(rlist: List[List[int]]):
    print([e[::-1] for e in rlist])


if __name__ == "__main__":
    reverseMatrix([[1, 2], [3, 4]])
    reverseMatrix([[1, 2, 3], [4, 5, 6]])
    reverseMatrix([[1, 2, 3, 4]])
    reverseMatrix([[1], [2], [3]])
    reverseMatrix([[1]])
    reverseMatrix([])
    reverseMatrix([
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ])
