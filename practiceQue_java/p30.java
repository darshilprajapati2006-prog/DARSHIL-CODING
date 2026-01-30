public class p30 {
    public static void main(String[] args) {
        double itemPrice = 1500.0;
        double discountPercent = 10.0;

        double discountAmount = (itemPrice * discountPercent) / 100;
        double finalPrice = itemPrice - discountAmount;

        System.out.println("Item Price: ₹" + itemPrice);
        System.out.println("Discount Percentage: " + discountPercent + "%");
        System.out.println("Discount Amount: ₹" + discountAmount);
        System.out.println("----------------------");
        System.out.println("Final Price: ₹" + finalPrice);
    }
}
