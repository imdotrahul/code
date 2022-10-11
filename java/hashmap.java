import java.util.*;

class hashmap{
    public static void main(String args[])
    {
        Hashtable<Integer,String> hmap = new Hashtable<Integer,String>();

        hmap.put(1, "Rahul");
        hmap.put(2, "Jatin");
        hmap.put(3, "Yash");
        hmap.put(4, "Pritam");
        hmap.put(5, "Adarsh");
        hmap.put(6, "Atishay");

        Enumeration<Integer> e = hmap.keys();
        while(e.hasMoreElements())
        {
            System.out.println(e.nextElement());
        }
        

    }
}