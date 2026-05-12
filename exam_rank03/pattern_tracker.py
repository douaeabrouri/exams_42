
def Pattern_tracker(s: str) -> int:
    counter = 0
    for i in range(1, len(s)):
        if s[i].isdigit() and s[i - 1].isdigit():
            if  int(s[i]) == int(s[i-1]) + 1:
               counter += 1
    return counter

if __name__ == "__main__":
    print(Pattern_tracker("123a345"))
    print(Pattern_tracker(""))
    print(Pattern_tracker("7"))
    print(Pattern_tracker("111111"))
    print(Pattern_tracker("012345"))
    print(Pattern_tracker("98"))