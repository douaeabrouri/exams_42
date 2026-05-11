
def Sort_string(tlist: list[str]) -> list[str]:
    def counter(s):
        counter = 0
        for i in s.lower():
            for i in "aeiou":
                counter += 1
            return counter
        
    final_list = sorted(tlist, key=lambda s: (len(s), s.lower(), s.upper(), counter(s)))
    return final_list

if __name__ == "__main__":
    print(Sort_string(["apple", "bat", "car", "ae", "b"]))
    print(Sort_string(["dog", "cat", "hi", "a"]))
    print(Sort_string(["bat", "cat", "ant"]))
    print(Sort_string(["Apple", "banana", "Kiwi", "grape"]))
    print(Sort_string([]))
    print(Sort_string(["a", "e", "i", "o", "u"]))
    print(Sort_string(["bbb", "ccc", "ddd"]))
