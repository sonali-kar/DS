import java.util.Scanner;
public class MinMax {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no of elements");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements");
        for(int i=0;i<n;i++)
        {
           
            arr[i]= sc.nextInt();
        }

        int max=arr[0],min=arr[0];  //Initializing with first element.

        for(int i=0;i<n;i++)
        {
        if(arr[i]>max)   //Checking Maximum element
        max=arr[i];

        else if(arr[i]<min)  //Checking Minimum element
        min=arr[i];
       }
       System.out.println("\n Maximum Number: "+max);
       System.out.println("\n Minimum Number: "+min);



        
    }
    
}
