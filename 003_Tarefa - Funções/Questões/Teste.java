/**
*[Área] Circulo = pi*R^2
*[Diâmetro] Circulo = 2*R
*/
import java.util.scanner;

float Diametro;
double const pi = 3.14;

public double VArea(){
	double Area;
	float Raio = Diametro/2;
	Area = pi * (Raio*Raio);
	return Area;
}

public float VRaio(){
	float Raio = Diametro/2;
	return Raio; 
}

public float VPerimetro(){
	float Raio = Diametro/2;
	float Perimetro = (2*pi)*Raio;
	return Perimetro;
}
public class Teste{
	public static void main (String [] args){
		int tecla;
		Scanner s = new Scanner (System.in);
		
		system.out.println("Perimetro [1] Area [2] Raio [3] Saida [4]:");
		s.scanner = tecla;
		system.out.println(tecla);
		
		switch(tecla){
			case 1:
				tecla = '1';
				system.out.println("Digite o Diametro do Circulo: ");
				s.scanner = Diametro;
				system.out.println(Diametro);
				system.out.println("Perimetro do Circulo: " + VPerimetro());
				// exit(0);
				break;
				
			case 2:
				tecla = '2';
				system.out.println("\nDigite o Diametro do Circulo: ");
				s.scanner = Diametro;
				system.out.println(Diametro);
				system.out.println("Area do Circulo: "+VArea());
				// exit(0);
				break;
				
			case 3:
				tecla = '3';
				system.out.println("\nDigite o Diametro do Circulo: ");
				s.scanner = Diametro;
				system.out.println(Diametro);
				system.out.println("Raio do Circulo: "+VRaio());
				//exit(0);
				break;
			case 4:
				tecla = '4';
				system.out.println("Saindo ... ");
				system("exit");
				//exit(0);
				break;
		}
		return 0;
	}
}