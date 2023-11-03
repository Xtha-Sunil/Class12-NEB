lengthStack = 5
stack = [None] * 5
pointer = 0

def Push(item):
    global stack, pointer, lengthStack
    if pointer >= lengthStack:
        print("Stack is full")
        return False
    stack[pointer] = item
    pointer += 1
    return True

def Pop():
    global  stack, pointer, lengthStack
    if pointer == 0:
        print("Stack is empty")
        return False
    pointer -= 1
    print(stack[pointer])
    return True



