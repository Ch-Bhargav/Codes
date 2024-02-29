package Java.crt;

import java.util.*;

public class IntegerSolution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[10000];
        Map<Integer, Integer> mp = new HashMap<>();
        int test = sc.nextInt();
        for (int i = 0; i < test; i++) {
            arr[i] = sc.nextInt();
            if (mp.containsKey(arr[i])) {
                mp.put(arr[i], mp.get(arr[i]) + 1);
            } else {
                mp.put(arr[i], 1);
            }
        }
        Arrays.sort(arr, (a, b) -> {
            if (mp.get(a) == mp.get(b)) {
                return b - a;
            }
            return mp.get(a) - mp.get(b);
        });

        for (int i : arr)
            System.out.print(i + ' ');
        sc.close();
    }
}