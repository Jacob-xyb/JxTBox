from JxTBox.SimpleCalculation.JxMathBox import *


def listcalculation(l1: list, l2: list, op: str = "+") -> list:
    return [doMath(op, l1[i], l2[i]) for i in range(len(l1))]
