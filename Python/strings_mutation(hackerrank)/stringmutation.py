def mutate_string(str,pos,ch):
    l=list(str)
    l[pos]=ch
    str=''.join(l)
    return str

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)