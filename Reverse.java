import java.util.Scanner;
public class Reverse{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no of elements ");
        int n = sc.nextInt();
        System.out.println("Enter the elements");
        int[] arr = new int[n];
        System.out.println("original array");
        for(int i =0;i<arr.length;i++)
        {
            arr[i]=sc.nextInt();
            //System.out.println("original array");
            System.out.println( arr[i]+" ");
        }
        System.out.println("Reversed array");
        for(int i= arr.length-1;i>=0;i--)
        {
            
            System.out.println( arr[i]+" ");
        }
        

    }
}