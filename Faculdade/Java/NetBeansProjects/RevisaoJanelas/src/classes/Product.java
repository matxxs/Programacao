package classes;

public class Product {
    
     //ATRIBUTOS
    
    private int id;
    private String description;
    private float unitaryValue;
    private float unit;
    
    //METODOS

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public float getUnitaryValue() {
        return unitaryValue;
    }

    public void setUnitaryValue(float unitaryValue) {
        this.unitaryValue = unitaryValue;
    }

    public float getUnit() {
        return unit;
    }

    public void setUnit(float unit) {
        this.unit = unit;
    }
}
