import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Введіть текст:");
        String text = sc.nextLine();

        // Розбиття по пробілах і розділових знаках
        String[] words = text.split("[\\s,!.?;:()]+");

        StringBuilder result = new StringBuilder();

        for (String w : words) {
            if (w.length() % 2 == 0) {   // якщо довжина парна → залишаємо
                result.append(w).append(" ");
            }
        }

        System.out.println("Результат:");
        System.out.println(result.toString().trim());
    }
}
