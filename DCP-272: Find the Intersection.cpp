import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int []ar=new int[1005];
        int tc=in.nextInt();
        int n=0;
        while(++n<=tc){
            for(int i=0;i<=1000;i++)ar[i]=0;
            int p=in.nextInt();
            in.nextLine();
            for(int j=0;j<p;j++){
                String s=in.nextLine();
                String []m=s.split(" ");
                for(int i=0;i<m.length;i++){
                    int t=Integer.parseInt(m[i]);
                    ar[t]++;
                }
            }
            int t=0,tt=0;
                for(int i=0;i<=1000;i++){
                    if(ar[i]==p){
                        t=1;
                        if(tt==0){
                            tt=1;
                            System.out.print(i);
                        }
                        else System.out.print(" "+i);
                    }
                }
                if(t==0)System.out.print("Empty");
                System.out.println();
        }
    }
}
