def find(mag,note):
    for i in note:
        if not i in mag:
            return "No"
        else:
            del mag[mag.index(i)]
    return "Yes"



k=raw_input()
mag=[i for i in raw_input().split()]
note=[i for i in raw_input().split()]
print(find(mag,note))