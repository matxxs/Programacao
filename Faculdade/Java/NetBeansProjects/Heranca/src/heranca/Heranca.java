 package heranca;

 import javax.swing.JOptionPane;
 
public class Heranca {

    public static void main(String[] args) {
        Pessoa p = new Pessoa();
        
      p.setId(Integer.parseInt(JOptionPane.showInputDialog("Informe o ID da Pessoa")));
      p.setName(JOptionPane.showInputDialog("Informe o nome da Pessoa"));
      JOptionPane.showMessageDialog(null, "ID " + "Nome" + "\n" + p.getId() + p.getName());
      //PESSOA FISICA
        
      PessoaFisica pf = new PessoaFisica();
      pf.setId(Integer.parseInt(JOptionPane.showInputDialog("Informe o ID da P. Fisica ")));
      pf.setName(JOptionPane.showInputDialog("Informe o nome da P. Fisica"));
      pf.setCpf(JOptionPane.showInputDialog("Informe o CPF da P. Fisica"));
      pf.setSexo(JOptionPane.showInputDialog("Informe o gênero da P. Fisica"));
      JOptionPane.showMessageDialog(null, "Pessoa: " + pf.getId() + "\nNome: "  + pf.getName() + "\nGenêro:" + pf.getSexo() + "\nCPF" + pf.getCpf());
    
      //PESSOA FISICA
      
      PessoaJuridica pj = new PessoaJuridica();
      pj.setId(Integer.parseInt(JOptionPane.showInputDialog("Informe o ID da P. Juridica ")));
      pj.setName(JOptionPane.showInputDialog("Informe o nome da P. Juridica"));
      pj.setCNPJ(JOptionPane.showInputDialog("Informe o CNPJ da P. Juridica"));
      pj.setRazaoSocial(JOptionPane.showInputDialog("Informe a Razão Social"));
      JOptionPane.showMessageDialog(null, "Pessoa: " + pj.getId() + "\nNome: "+ pj.getName() + "\nCNPJ: " + pj.getCNPJ() +  "\nRazão Social" + pj.getRazaoSocial() );
      
      //PROPRIETARIO
      
      Proprietario ppt = new Proprietario();
      ppt.setId(Integer.parseInt(JOptionPane.showInputDialog("Informe o ID do Proprietario ")));
      ppt.setName(JOptionPane.showInputDialog("Informe o nome do Proprietario"));
      ppt.setCpf(JOptionPane.showInputDialog("Informe o Proprietario"));
      ppt.setSexo(JOptionPane.showInputDialog("Informe o genêro do Proprietario"));
      ppt.setParticipacao(Double.parseDouble(JOptionPane.showInputDialog("Informe a Participação ")));
      ppt.setProLabore(Double.parseDouble(JOptionPane.showInputDialog("Informe a Pro Labore ")));
      JOptionPane.showMessageDialog(null, "Pessoa: " + ppt.getId() + "\nNome: "  + ppt.getName() + "\nGenêro:" + ppt.getSexo() + "\nCPF" + ppt.getCpf() + "\nParticipação" + ppt.getParticipacao() + "\nProLabore" + ppt.getProLabore());
      
      //FUNCIONARIO
      Funcionario fun = new Funcionario();
      fun.setId(Integer.parseInt(JOptionPane.showInputDialog("Informe o ID do Funcionario ")));
      fun.setName(JOptionPane.showInputDialog("Informe o nome do Funcionario"));
      fun.setCpf(JOptionPane.showInputDialog("Informe o Funcionario"));
      fun.setSexo(JOptionPane.showInputDialog("Informe o genêro do Funcionario"));
      fun.setNameCargo( JOptionPane.showInputDialog("Informe o genêro do Funcionario"));
      fun.setSalario(Double.parseDouble(JOptionPane.showInputDialog("Informe a Pro Labore ")));
      JOptionPane.showMessageDialog(null, "Pessoa: " + fun.getId() + "\nNome: "  + fun.getName() + "\nGenêro:" + fun.getSexo() + "\nCPF" + fun.getCpf() + "\nNome do Cargo" + fun.getNameCargo() + "\nSalario" + fun.getSalario());
      
    }
    
}
