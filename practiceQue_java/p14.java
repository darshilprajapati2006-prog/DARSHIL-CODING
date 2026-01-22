class BankAccount {
    String accountNumber;
    double balance;
}

public class p14 {
    public static void main(String[] args) {
        BankAccount acc1 = new BankAccount();
        acc1.accountNumber = "SBIN123456";
        acc1.balance = 25000.75;

        System.out.println("Account Number: " + acc1.accountNumber);
        System.out.println("Balance: " + acc1.balance);
    }
}
