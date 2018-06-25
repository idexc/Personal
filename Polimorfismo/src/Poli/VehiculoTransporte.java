package Poli;

public class VehiculoTransporte extends Vehiculo{
    private int Pasajeros;
    
    public VehiculoTransporte(int Pasajeros, String placa, String marca, String modelo){
        super(placa,marca,modelo);
        this.Pasajeros=Pasajeros;
    }
    
    public int getPasajeros(){
        return Pasajeros;
    }
    
    @Override
    public String mostrarDatos(){
       return "\nPlaca: "+placa+"\nMarca: "+marca+"\nModelo: "+modelo+"\nPasaje Máximo: "+Pasajeros; 
    }
}
