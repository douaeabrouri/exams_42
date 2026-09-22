
def is_palindrom(s) -> bool:
    return s == s[::-1]

def palindrome_partitioner(s: str) -> None:

    if is_palindrom(s):
        return 0
    if (len(s) <=1):
        return 0
    
    i = 1
    final = len(s) - 1
    # cuts = 0
    while(i < len(s)):
        left = s[:i]
        if is_palindrom(left):
            cuts = 1 + palindrome_partitioner(s[i:])

            if cuts < final:
                final = cuts
        i+=1
    return final

print(palindrome_partitioner("aabc"))
