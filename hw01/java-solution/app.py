#!/usr/bin/env python3

def main():
    with open('incomes.txt') as f:
        read_data = f.read()
        taxesOwed = TaxesOwed(read_data.split())
        print(taxesOwed)

    f.close()

def TaxesOwed(incomeList):
    totalTaxes = 0
    for currentIncome in incomeList:
        currentIncome = int(currentIncome)
        while currentIncome > 200:
            taxAddition = (int((currentIncome / 5)) - 40)
            currentIncome = taxAddition
            totalTaxes = totalTaxes + taxAddition
    return totalTaxes;

main()
