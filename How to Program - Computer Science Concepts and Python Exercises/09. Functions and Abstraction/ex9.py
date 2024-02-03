def get_increase(type):
    previous = float(input("Enter previous " + type))
    new = float(input("Enter new " + type))
    if new > previous:
        return new - previous
    else:
        return 0


salaryincrease = get_increase("salary")
benefitsincrease = get_increase("benefits")
bonusincrease = get_increase("bonus")
