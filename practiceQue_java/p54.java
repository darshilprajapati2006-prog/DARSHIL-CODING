public class p54 {
    public static void main(String[] args) {
        int units = 250;
        double billAmount;

        if (units <= 100) {
            billAmount = units * 1.5;
        } else if (units <= 200) {
            billAmount = (100 * 1.5) + (units - 100) * 2.5;
        } else if (units <= 300) {
            billAmount = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4.0;
        } else {
            billAmount = (100 * 1.5) + (100 * 2.5) + (100 * 4.0) + (units - 300) * 5.0;
        }

        System.out.println("Units Consumed: " + units);
        System.out.println("Total Electricity Bill: ₹" + billAmount);
    }
}
