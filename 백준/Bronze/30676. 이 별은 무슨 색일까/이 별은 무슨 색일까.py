if __name__ == '__main__':
    lam = int(input())
    if lam < 425:
        print("Violet")
    elif lam < 450:
        print("Indigo")
    elif lam < 495:
        print("Blue")
    elif lam < 570:
        print("Green")
    elif lam < 590:
        print("Yellow")
    elif lam < 620:
        print("Orange")
    else:
        print("Red")