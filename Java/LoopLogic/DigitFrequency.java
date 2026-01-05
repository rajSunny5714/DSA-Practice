package LoopLogic;
import java.util.*;

public class DigitFrequency{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int key=sc.nextInt();
        int count=0;
        while(n>0){
            if(n%10==key) count++;
            n/=10;
        }
        System.out.println(count);
    }
}
