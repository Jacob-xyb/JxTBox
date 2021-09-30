def doMath(op, op1, op2):
    if op == "+":
        return op1 + op2
    elif op == "-":
        return op1 - op2
    elif op == "*":
        return op1 * op2
    elif op == "/":
        return op1 / op2
    elif op == "**":
        return op1 ** op2
    elif op == "%":  # 取余
        return op1 % op2
    elif op == "//": # 取整
        return op1 // op2