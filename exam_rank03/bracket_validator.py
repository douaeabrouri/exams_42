def bracket_validator(s: str) -> bool:
    
    # for i in range(0, len(s)):
    #     if s[i] == '(' and s[i + 1] != ')':
    #         return False
    #     if s[i] == '[' and s[i + 1] != ']':
    #         return False
    #     if s[i] == '{' and s[i + 1] != '}':
    #         return False
    #     else:
    #         return True
    my_list = ['[', ']', '(', ')', '{', '}']
    for c in s:
        if c not in my_list:
            s = s.replace(c, "")
    while "()" in s or "{}" in s or "[]" in s:
        s = s.replace("{}", "")
        s = s.replace("()", "")
        s = s.replace("[]", "")
    return s == ""
        
import string

if __name__ == "__main__":
    print(bracket_validator("()"))
    print(bracket_validator("()[]{}"))
    print(bracket_validator("{[()]}") )
    print(bracket_validator("") )
    print(bracket_validator("(]"))
    print(bracket_validator("([)]") )
    print(bracket_validator("(((") )
    print(bracket_validator("())"))
    print(bracket_validator("{[(])}"))
    print(bracket_validator("hello(hhhh)world{ho}w are"))
    print(dir(__builtins__))