class Invoice {
    private String partNumber;
    private String partDescription;
    private int quantity;
    private double pricePerItem;

    public Invoice(String partNumber, String partDescription, int quantity, double pricePerItem) {
        this.partNumber = partNumber;
        this.partDescription = partDescription;
        if (quantity > 0)
            this.quantity = quantity;
        else
            this.quantity = 0;

        if (pricePerItem > 0)
            this.pricePerItem = pricePerItem;
        else
            this.pricePerItem = 0.0;
    }

    public void setPartNumber(String partNumber) {
        this.partNumber = partNumber;
    }

    public String getPartNumber() {
        return partNumber;
    }

    public void setPartDescription(String partDescription) {
        this.partDescription = partDescription;
    }

    public String getPartDescription() {
        return partDescription;
    }

    public void setQuantity(int quantity) {
        if (quantity > 0)
            this.quantity = quantity;
        else
            this.quantity = 0;
    }

    public int getQuantity() {
        return quantity;
    }

    public void setPricePerItem(double pricePerItem) {
        if (pricePerItem > 0)
            this.pricePerItem = pricePerItem;
        else
            this.pricePerItem = 0.0;
    }

    public double getPricePerItem() {
        return pricePerItem;
    }

    public double getInvoiceAmount() {
        return quantity * pricePerItem;
    }
}

public class p2 {   // InvoiceTest
    public static void main(String[] args) {

        Invoice item1 = new Invoice("A101", "Keyboard", 2, 450.50);

        System.out.println("Part Number: " + item1.getPartNumber());
        System.out.println("Description: " + item1.getPartDescription());
        System.out.println("Quantity: " + item1.getQuantity());
        System.out.println("Price per Item: " + item1.getPricePerItem());
        System.out.println("Invoice Amount: " + item1.getInvoiceAmount());

        System.out.println();

        Invoice item2 = new Invoice("B202", "Mouse", -5, -100);

        System.out.println("Part Number: " + item2.getPartNumber());
        System.out.println("Description: " + item2.getPartDescription());
        System.out.println("Quantity: " + item2.getQuantity());
        System.out.println("Price per Item: " + item2.getPricePerItem());
        System.out.println("Invoice Amount: " + item2.getInvoiceAmount());
    }
}
