package classes;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class Employee {
   
 private String name;
 private String office;
 private String email;
 private String phone;
 private String cpf;
 private float salary;
 private String imposto;
  
 //METODOS

 public String getName() {
     return name;
 }

 public void setName(String name) {
     this.name = name;
 }

 public float getSalary() {
     return salary;
 }

 public void setSalary(float salary) {
     this.salary = salary;
 }

 public String getEmail() {
     return email;
 }

 public void setEmail(String email) {
     this.email = email;
 }

  public String getCpf() {
     return cpf;
 }

 public void setCPF(String cpf) {
     this.cpf = cpf;
 }

 public String getPhone() {
     return phone;
 }

 public void setPhone(String phone) {
     this.phone = phone;
 }

 public String getOffice() {
     return office;
 }

 public void setOffice(String office) {
     this.office = office;
 }
 
     public String getImposto() {
     return imposto;
 }

 public void setImposto(String imposto) {
     this.imposto = imposto;
 }

 public void fileSave(){
     
     try{
         
         File  arquivo = new File("dados.txt");
         FileWriter fw = new FileWriter(arquivo,true);
         BufferedWriter bw =  new BufferedWriter(fw);
         //escreve os dados no arquivo
         bw.write( this.name + "," + this.office + ","+ this.email
                   + "," + this.phone + ","  + this.cpf + "," 
                 + this.salary + "," + this.imposto + "," );
         bw.newLine();
         //fechao a escrita do aquivo
         bw.close();
     } catch (IOException e){
         
          e.printStackTrace();

     }
 }
    
}
