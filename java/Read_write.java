import java.io.*;
public class Read_write
{
    public static void main(String[] args){
        try{
            FileWriter fw=new FileWriter("final_practical.txt");
            fw.write("NAME : Khushi Bhardwaj\n");
            fw.write("UID : 20BCS8236\n");
            fw.write("Section : 801-C\n");
            fw.close();
            System.out.println("\nSuccessful Creation\n");
            FileReader fr=new FileReader("final_practical.txt");
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
