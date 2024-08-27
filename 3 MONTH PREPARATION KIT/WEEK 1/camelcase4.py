import re
def fun(s):
    first, second, string = s.split(';')
    words = re.sub('[A-Z]', lambda x: ' ' + x.group(), string).strip().split()

    if first == 'S':
        words = [word.lower() for word in words]
    elif first == 'C':
        if second == 'M':
            words[0] = words[0].lower()
            string += '()'
        elif second == 'V':
            words[0] = words[0].lower()
        elif second == 'C':
            words = [word.capitalize() for word in words]

    print(' '.join(words))

if __name__ == "__main__":
    while True:
        S = input().strip()
        fun(S)