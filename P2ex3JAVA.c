package Parte2;

public class Funcionario {
	private int codFunc;
	private String nomeFunc;
	private double salarioMensal;
	
	public Funcionario(int codFunc, String nomeFunc, double salarioMensal) {
		this.codFunc = codFunc;
		this.nomeFunc = nomeFunc;
		this.salarioMensal = salarioMensal;
	}

	public int getCodFunc() {
		return codFunc;
	}

	private void setCodFunc(int codFunc) {
		this.codFunc = codFunc;
	}

	public String getNomeFunc() {
		return nomeFunc;
	}

	public void setNomeFunc(String nomeFunc) {
		this.nomeFunc = nomeFunc;
	}

	public double getSalarioMensal() {
		return salarioMensal;
	}

	private void setSalarioMensal(double salarioMensal) {
		this.salarioMensal = salarioMensal;
	}
	
	public void setAumento(double aumento) {
		this.salarioMensal = this.salarioMensal + ((this.salarioMensal * aumento) / 100);
	}

}
