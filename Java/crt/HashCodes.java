package Java.crt;

import java.util.*;

public class HashCodes {

    public static void printFreq(int arr[]) {
        Map<Integer, Integer> tm = new TreeMap<>()/* ((a-b)->{return b-a}) */;
        for (int i : arr) {
            if (tm.containsKey(i))
                tm.put(i, tm.getOrDefault(i, 0));
        }
        for (int i : tm.keySet()) {
            System.out.println("Frequency of " + i + " is: " + tm.get(i) + " times");
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        printFreq(arr);
        sc.close();
    }
}