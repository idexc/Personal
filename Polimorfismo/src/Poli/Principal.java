//Ejercicio de practica para polimorfismo
//Fernando Alonso Calva Sánchez

package Poli;

public class Principal {
    public static void main(String[] args){
        Vehiculo misVehiculos[] = new Vehiculo[4];
        
        misVehiculos[0] = new Vehiculo("4SDF53","Toyota","MX6");
        misVehiculos[1] = new VehiculoDeportivo(320,"89ID90","Ferrari","Spider");
        misVehiculos[2] = new VehiculoCarga(2000,"T05HIF","RAM","F150");
        misVehiculos[3] = new VehiculoTransporte(45,"J6AE43","Mercedez","BUStei");
        
        for(Vehiculo vehiculos: misVehiculos){
            System.out.println(vehiculos.mostrarDatos());
            System.out.println("");
        }
    }
}
