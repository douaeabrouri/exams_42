
def palindrome(s: str):
    
    clean = ""
    for c in s:
        if  c.isalnum():
            clean += c.lower()
    i = 0
    j = len(clean) - 1
    if clean == "":
        print("True")
        return 1
    while j > i:
        if clean[i] != clean[j]:
           print("false")
           return
        j -= 1
        i += 1
    print("True")


palindrome("madam")                     # True
palindrome("racecar")                   # True
palindrome("A man, a plan, a canal: Panama")  # True
palindrome("No 'x' in Nixon")           # True
palindrome("")                          # True
palindrome("a")                         # True
palindrome("12345")

