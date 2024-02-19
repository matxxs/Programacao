package classes;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
//classe para tratemento de excecoes
import java.io.IOException;
import javax.imageio.IIOException;

import javax.swing.JOptionPane;

public class Employee {
     //ATRIBUTOS
 
 private int id;
 private String name;
 private float salary;
 private String email;
 private String address;
 private String phone;
 private String age;
 private String office;
 private String imposto;
 private String Inss;
 
 //METODOS

 public int getId() {
     return id;
 }

 public void setId(int id) {
     this.id = id;
 }

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

 public String getAddress() {
     return address;
 }

 public void setAddress(String address) {
     this.address = address;
 }

 public String getPhone() {
     return phone;
 }

 public void setPhone(String phone) {
     this.phone = phone;
 }

 public String getAge() {
     return age;
 }

 public void setAge(String age) {
     this.age = age;
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

 public String getInss() {
     return Inss;
 }

 public void setInss(String Inss) {
     this.Inss = Inss;
 }
 
 public void fileSave(){
     
     try{
         
         File  arquivo = new File("funcionario.txt");
         FileWriter fw = new FileWriter(arquivo,true);
         BufferedWriter bw =  new BufferedWriter(fw);
         //escreve os dados no arquivo
         bw.write( this.id + "," + this.name + "," + this.phone
                  + this.address + "," + this.office + "," + this.age + "," + this.email + "," 
                 + this.salary + "," + this.imposto + "," + this.Inss);
         bw.newLine();
         //fechao a escrita do aquivo
         bw.close();
     } catch (IOException e){
         
          e.printStackTrace();

     }
 }
}
