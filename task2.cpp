import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Введіть a: ");
        double a = sc.nextDouble();
        System.out.print("Введіть b: ");
        double b = sc.nextDouble();

        System.out.print("Введіть n (<=200): ");
        int n = sc.nextInt();

        double[] X = new double[n];

        System.out.println("Введіть елементи масиву:");
        for (int i = 0; i < n; i++) {
            X[i] = sc.nextDouble();
        }

        double sumLessA = 0;
        double prodGreaterB = 1;
        boolean hasGreaterB = false;

        Double minInRange = null;
        Double maxInRange = null;

        for (double x : X) {
            if (x < a) {
                sumLessA += x;
            }

            if (x > b) {
                prodGreaterB *= x;
                hasGreaterB = true;
            }

            if (x >= a && x <= b) {
                if (minInRange == null || x < minInRange) minInRange = x;
                if (maxInRange == null || x > maxInRange) maxInRange = x;
            }
        }

        System.out.println("Сума X(i) < a = " + sumLessA);

        if (hasGreaterB)
            System.out.println("Добуток X(i) > b = " + prodGreaterB);
        else
            System.out.println("Немає елементів > b");

        if (minInRange != null) {
            System.out.println("Min у [a, b] = " + minInRange);
            System.out.println("Max у [a, b] = " + maxInRange);
        } else {
            System.out.println("Немає елементів у діапазоні [a, b]");
        }
    }
}
