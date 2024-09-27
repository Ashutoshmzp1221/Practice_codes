import java.util.Scanner;

class Account {
    double amount;
    int maturityPeriod;
    int age;

    void calculateInterest(double interestRate, String accountType) {
        double interest = (amount * interestRate) / 100;
        System.out.println("Interest gained on " + accountType + ": " + interest);
    }
}

class FDAccount extends Account {
    void calculateInterest() {
        double interestRate;

        if (amount < 10000000) {
            if (age >= 60) {
                if (maturityPeriod >= 7 && maturityPeriod <= 14) {
                    interestRate = 5.00;
                } else if (maturityPeriod >= 15 && maturityPeriod <= 29) {
                    interestRate = 5.25;
                } else if (maturityPeriod >= 30 && maturityPeriod <= 45) {
                    interestRate = 6.00;
                } else if (maturityPeriod >= 45 && maturityPeriod <= 60) {
                    interestRate = 7.50;
                } else if (maturityPeriod >= 61 && maturityPeriod <= 184) {
                    interestRate = 8.00;
                } else if (maturityPeriod >= 185 && maturityPeriod <= 365) {
                    interestRate = 8.50;
                } else {
                    System.out.println("Invalid maturity period for FD account.");
                    return;
                }
            } else {
                if (maturityPeriod >= 7 && maturityPeriod <= 14) {
                    interestRate = 4.50;
                } else if (maturityPeriod >= 15 && maturityPeriod <= 29) {
                    interestRate = 4.75;
                } else if (maturityPeriod >= 30 && maturityPeriod <= 45) {
                    interestRate = 5.50;
                } else if (maturityPeriod >= 45 && maturityPeriod <= 60) {
                    interestRate = 7.00;
                } else if (maturityPeriod >= 61 && maturityPeriod <= 184) {
                    interestRate = 7.50;
                } else if (maturityPeriod >= 185 && maturityPeriod <= 365) {
                    interestRate = 8.00;
                } else {
                    System.out.println("Invalid maturity period for FD account.");
                    return;
                }
            }
        } else {
            if (maturityPeriod >= 7 && maturityPeriod <= 14) {
                interestRate = 6.50;
            } else if (maturityPeriod >= 15 && maturityPeriod <= 29) {
                interestRate = 6.75;
            } else if (maturityPeriod >= 30 && maturityPeriod <= 45) {
                interestRate = 6.75;
            } else if (maturityPeriod >= 45 && maturityPeriod <= 60) {
                interestRate = 8.00;
            } else if (maturityPeriod >= 61 && maturityPeriod <= 184) {
                interestRate = 8.50;
            } else if (maturityPeriod >= 185 && maturityPeriod <= 365) {
                interestRate = 10.00;
            } else {
                System.out.println("Invalid maturity period for FD account.");
                return;
            }
        }

        super.calculateInterest(interestRate, "FD");
    }
}

class RDAccount extends Account {
    void calculateInterest() {
        double interestRate;

        if (age >= 65) {
            if (maturityPeriod == 6) {
                interestRate = 7.50;
            } else if (maturityPeriod == 9) {
                interestRate = 7.75;
            } else if (maturityPeriod == 12) {
                interestRate = 8.00;
            } else if (maturityPeriod == 15) {
                interestRate = 8.25;
            } else if (maturityPeriod == 18) {
                interestRate = 8.50;
            } else if (maturityPeriod == 21) {
                interestRate = 8.75;
            } else {
                System.out.println("Invalid maturity period for RD account.");
                return;
            }
        } else {
            if (maturityPeriod == 6) {
                interestRate = 7.50;
            } else if (maturityPeriod == 9) {
                interestRate = 7.75;
            } else if (maturityPeriod == 12) {
                interestRate = 8.00;
            } else if (maturityPeriod == 15) {
                interestRate = 8.25;
            } else if (maturityPeriod == 18) {
                interestRate = 8.50;
            } else if (maturityPeriod == 21) {
                interestRate = 8.75;
            } else {
                System.out.println("Invalid maturity period for RD account.");
                return;
            }
        }

        super.calculateInterest(interestRate, "RD");
    }
}

class SBaccount extends Account {
    String accountType;

    void calculateInterest() {
        double interestRate;

        if (accountType.equalsIgnoreCase("Normal")) {
            interestRate = 4.00;
        } else if (accountType.equalsIgnoreCase("NRI")) {
            interestRate = 6.00;
        } else {
            System.out.println("Invalid account type for SB account.");
            return;
        }

        super.calculateInterest(interestRate, "SB");
    }
}

public class expp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("1. FD Account");
        System.out.println("2. RD Account");
        System.out.println("3. SB Account");
        System.out.println("4. Exit");

        System.out.print("Enter your choice: ");
        int choice = sc.nextInt();

        Account account = null;

        switch (choice) {
            case 1:
                account = new FDAccount();
                break;

            case 2:
                account = new RDAccount();
                break;

            case 3:
                account = new SBaccount();
                break;

            case 4:
                System.exit(0);
                break;

            default:
                System.out.println("Invalid choice.");
                return;
        }

        System.out.print("Enter amount: ");
        account.amount = sc.nextDouble();

        if (account instanceof FDAccount) {
            System.out.print("Enter maturity period (in days): ");
        } else if (account instanceof RDAccount) {
            System.out.print("Enter maturity period (in months): ");
        } else if (account instanceof SBaccount) {
            System.out.print("Enter account type (Normal/NRI): ");
            ((SBaccount) account).accountType = sc.next();
        }

        account.maturityPeriod = sc.nextInt();
        System.out.print("Enter age of account holder: ");
        account.age = sc.nextInt();

        account.calculateInterest();
    }
}