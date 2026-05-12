
def convert_base(num: str, from_base: int, to_base: int) -> str:
    try:
        digits: str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

        if not 2 <= from_base <= 36:
            return "ERROR"
        if not 2 <= to_base <= 36:
            return "ERROR"
        
        n = int(num, from_base)
        print(n)
        if n == 0:
            return "0"
        
        res = ""
        while n:
            res += digits[n % to_base]
            n //= to_base
        return res[::-1]
    except:
        return "w93 hna"
    
if __name__ == "__main__":
    print(convert_base("1A", 16, 26))
