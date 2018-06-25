
package Poli;

public class VehiculoDeportivo extends Vehiculo{
    private int VelMaxima;
    
    public VehiculoDeportivo(int VelMaxima, String placa, String marca, String modelo){
        super(placa,marca,modelo);
        this.VelMaxima=VelMaxima;
    }
    
    public int getVelMaxima(){
        return VelMaxima;
    }
    
    @Override
    public String mostrarDatos(){
       return "\nPlaca: "+placa+"\nMarca: "+marca+"\nModelo: "+modelo+"\nVelocidad Máxima: "+VelMaxima; 
    }
}
