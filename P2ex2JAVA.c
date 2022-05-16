package Parte2;

public class ContaCorrent {
	private int numCC;
	private double saldoCC;
	
	public ContaCorrent(int numCC, double saldoCC) {
		this.numCC = numCC;
		this.saldoCC = saldoCC;
	}

	public int getNumCC() {
		return numCC;
	}

	public void setNumCC(int numCC) {
		this.numCC = numCC;
	}

	public double getSaldoCC() {
		return saldoCC;
	}

	public void setSaldoCC(double saldoCC) {
		this.saldoCC = saldoCC;
	}
	
	public void deposito(double deposito) {
		this.saldoCC += deposito;
	}
	
	public void saque(double valor) {
		this.saldoCC -= valor;
	}

}