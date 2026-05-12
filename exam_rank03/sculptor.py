
def sculptor(string: str) -> str:

    new_str: str = ""
    counter = 1
    for i in range(0, len(string)):

        if string[i].isalpha():
            if counter % 2 == 0:
                new_str += string[i].upper()
            else:
               new_str += string[i].lower()
            counter += 1
        else:
            new_str += string[i]
    return new_str

if __name__ == "__main__":
    print(sculptor("Hello, world!"))
    print(sculptor("123abcDEF"))
    print(sculptor("a-bC-dEf-ghIj"))
    print(sculptor(""))
    print(sculptor("12345"))
    print(sculptor("A"))
    print(sculptor("ab"))