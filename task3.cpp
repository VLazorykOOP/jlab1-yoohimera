import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Введіть n (<= 15): ");
        int n = sc.nextInt();

        int[][] A = new int[n][n];
        int[][] B = new int[n][n];
        int[] X = new int[n];

        System.out.println("Введіть матрицю A:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                A[i][j] = sc.nextInt();
            }
        }

        System.out.println("Введіть матрицю B:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                B[i][j] = sc.nextInt();
            }
        }

        // Формування вектора X
        for (int i = 0; i < n; i++) {
            boolean equalRow = true;

            for (int j = 0; j < n; j++) {
                if (A[i][j] != B[i][j]) {
                    equalRow = false;
                    break;
                }
            }

            X[i] = equalRow ? 1 : 0;
        }

        System.out.println("Вектор X:");
        for (int i = 0; i < n; i++) {
            System.out.print(X[i] + " ");
        }
    }
}
