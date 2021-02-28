package org.mcnichol.cis2420.hw01;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

/*
    Q: As income input values approach infinity, what is the tax rate percentage owed to the government?
    A: 25%
 */
public class App {
    public static void main(String[] args) {
        int[] incomeValuesToCompute = {16264, 13954, 11547, 6415, 3187};

        long aggregateTaxesOwed = 0;
        for (int currentIncome : incomeValuesToCompute) {
            aggregateTaxesOwed += computeTaxes(currentIncome);
        }
        System.out.printf("Taxes Owed From Array: $%,d%n", aggregateTaxesOwed);

        try (Scanner fileInput = new Scanner(new File("incomes.txt"))) {
            aggregateTaxesOwed = 0;
            while (fileInput.hasNextInt()) {
                aggregateTaxesOwed += computeTaxes(fileInput.nextInt());
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.printf("Taxes Owed From File: $%,d%n", aggregateTaxesOwed);

        System.out.printf("Maximum Tax Percent:\t%.3f%%\n", ((float) computeTaxes(Integer.MAX_VALUE) / Integer.MAX_VALUE) * 100);
    }

    private static int computeTaxes(int income) {
        return income < 200 ? 0 : (((income / 5) - 40) + computeTaxes(((income / 5) - 40)));
    }
}
