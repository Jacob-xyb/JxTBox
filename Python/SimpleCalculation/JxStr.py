def strsplit(str1: str) -> list:
    res = []
    for i in str1:
        if i == " ":
            continue
        res.append(i)
    return res
