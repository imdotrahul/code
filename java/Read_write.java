import java.io.*;
public class Read_write
{
    public static void main(String[] args){
        try{
            FileWriter fw=new FileWriter("exp2_3.txt");
            fw.write("NAME : Rahul Yadav\n");
            fw.write("UID : 20BCS8216\n");
            fw.write("Section : 37-B\n");
            fw.close();
            System.out.println("\nSuccessful Creation\n");
            FileReader fr=new FileReader("exp2_3.txt");
            int i;
            while((i=fr.read())!=-1) System.out.print((char)i);
            fr.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
            System.out.println("\nSuccessful Execution");

    }
}
