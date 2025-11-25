import java.util.Scanner;

public class Variant1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Введіть x: ");
        double x = sc.nextDouble();

        System.out.print("Введіть y: ");
        double y = sc.nextDouble();

        double result = (2 * x * x + x * y) / Math.pow(x * y, 2)
                + (3 * x * y - y * y * y) / (x * x + 2 * y * y);

        System.out.println("Результат (double → double): " + result);
    }
}
