import java.text.NumberFormat;
import java.text.ParsePosition;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("Enter a number: ");
		String number = scanner.nextLine();
		scanner.close();
		
		number = number.trim();
		int num = 0;
		
		if (!isNumeric(number)) {
			System.out.println("ERROR: INVALID INPUT");
			System.exit(-1);
		}
		else { num = Integer.parseInt(number);}
		
		int i = 0, j = 0;
		
		while (i <= num) {
			if (i < num) System.out.print(i + " + ");
			else if (i == num) System.out.print(i + " = ");
			
			j = j + i;
			i += 1;
		}
		
		System.out.println(j);
	}
	
	public static boolean isNumeric(String str) {
		
		ParsePosition pos = new ParsePosition(0);
		NumberFormat.getInstance().parse(str, pos);
		return str.length() == pos.getIndex();
	}

}
