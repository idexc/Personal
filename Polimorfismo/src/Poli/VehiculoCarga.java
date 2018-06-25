
package Poli;

public class VehiculoCarga extends Vehiculo{
    private int CargaMax;
    
    public VehiculoCarga(int CargaMax, String placa, String marca, String modelo){
        super(placa,marca,modelo);
        this.CargaMax=CargaMax;
    }

    public int getCargaMax(){
        return CargaMax;
    }
    
    @Override
    public String mostrarDatos(){
       return "\nPlaca: "+placa+"\nMarca: "+marca+"\nModelo: "+modelo+"\nCarga Máxima: "+CargaMax; 
    }
}
