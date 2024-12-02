import java.awt.*;
import java.awt.event.*;

class GUI3 
{
    public static void main(String args[]) {
        Frame fobj = new Frame("Marvellous PPA");
        fobj.setSize(400, 400);
        fobj.setVisible(true);
        fobj.addWindowListener(new marvellousListener());
    }
}

class marvellousListener extends WindowAdapter 

{
public void windowClosing(WindowEvent e) 
    {
        System.exit(0); 
    }
}
