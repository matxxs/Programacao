/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package janelas;


import classes.Employee;
import java.math.BigDecimal;
import java.text.DecimalFormat;
import javax.swing.JOptionPane;

public class FrmEmployee extends javax.swing.JFrame {

    /**
     * Creates new form FrmEmployee
     */
    public FrmEmployee() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jMenu1 = new javax.swing.JMenu();
        jLabel8 = new javax.swing.JLabel();
        TfTax = new javax.swing.JTextField();
        jLabel2 = new javax.swing.JLabel();
        BtCalcular = new javax.swing.JButton();
        TfName = new javax.swing.JTextField();
        jLabel3 = new javax.swing.JLabel();
        TfPhone = new javax.swing.JTextField();
        TfSalary = new javax.swing.JTextField();
        jLabel4 = new javax.swing.JLabel();
        TfEmail = new javax.swing.JTextField();
        BtDelete = new javax.swing.JButton();
        jLabel6 = new javax.swing.JLabel();
        BtSave = new javax.swing.JButton();
        jLabel9 = new javax.swing.JLabel();
        TfCfp = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();
        JcbOffice = new javax.swing.JComboBox<>();

        jMenu1.setText("jMenu1");

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel8.setText("SALÁRIO");

        TfTax.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                TfTaxActionPerformed(evt);
            }
        });

        jLabel2.setText("NOME");

        BtCalcular.setText("CALCULAR");
        BtCalcular.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BtCalcularActionPerformed(evt);
            }
        });

        jLabel3.setText("TELEFONE");

        TfSalary.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                TfSalaryActionPerformed(evt);
            }
        });

        jLabel4.setText("E-MAIL");

        TfEmail.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                TfEmailActionPerformed(evt);
            }
        });

        BtDelete.setText("CANCELAR");
        BtDelete.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BtDeleteActionPerformed(evt);
            }
        });

        jLabel6.setText("CARGO");

        BtSave.setText("CADASTRAR");
        BtSave.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BtSaveActionPerformed(evt);
            }
        });

        jLabel9.setText("IMPOSTO");

        TfCfp.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                TfCfpActionPerformed(evt);
            }
        });

        jLabel1.setText("CPF");

        JcbOffice.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Assi. TI", "Aux. TI", "Analista TI", "Coor. de TI", "Gerente TI" }));
        JcbOffice.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                JcbOfficeActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(BtDelete)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(BtSave))
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                .addComponent(BtCalcular)
                                .addGroup(layout.createSequentialGroup()
                                    .addComponent(jLabel3)
                                    .addGap(69, 69, 69)
                                    .addComponent(jLabel1))
                                .addGroup(layout.createSequentialGroup()
                                    .addComponent(TfSalary, javax.swing.GroupLayout.PREFERRED_SIZE, 65, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addGap(47, 47, 47)
                                    .addComponent(TfTax, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addComponent(jLabel2)
                                .addComponent(jLabel4)
                                .addComponent(jLabel6)
                                .addComponent(JcbOffice, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(TfEmail)
                                .addGroup(layout.createSequentialGroup()
                                    .addComponent(TfPhone, javax.swing.GroupLayout.PREFERRED_SIZE, 94, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addGap(37, 37, 37)
                                    .addComponent(TfCfp, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addComponent(TfName))
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(jLabel8)
                                .addGap(62, 62, 62)
                                .addComponent(jLabel9)))
                        .addGap(0, 0, Short.MAX_VALUE))))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jLabel2)
                        .addGap(12, 12, 12)
                        .addComponent(TfName, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(jLabel4)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(TfEmail, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jLabel3)
                            .addComponent(jLabel1))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(TfPhone, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(TfCfp, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jLabel6)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(JcbOffice, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jLabel8)
                            .addComponent(jLabel9, javax.swing.GroupLayout.PREFERRED_SIZE, 16, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(TfTax, javax.swing.GroupLayout.PREFERRED_SIZE, 24, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(8, 8, 8))
                    .addComponent(TfSalary, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(42, 42, 42)
                .addComponent(BtCalcular)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 32, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(BtDelete)
                    .addComponent(BtSave))
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void TfTaxActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TfTaxActionPerformed

    }//GEN-LAST:event_TfTaxActionPerformed

    private void BtCalcularActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BtCalcularActionPerformed

        // CALCULO IMPOSTO DE RENDA

        float salarioBruto = Float.parseFloat(TfSalary.getText());
        float imposto = 0.0f;

        int casasDecimais = 2;
        DecimalFormat df = new DecimalFormat("#." + "0".repeat(casasDecimais));;

        if (salarioBruto <= 2112) {
            TfTax.setText("ISENTO");

        } else if (salarioBruto <= 2826.66) {
            imposto = (salarioBruto - 2112.01f) * 0.075f;
            TfTax.setText("R$" + df.format(imposto));

        } else if (salarioBruto <= 3751.06) {
            imposto = (2826.66f - 2112.01f) * 0.075f + (salarioBruto - 2826.66f) * 0.15f;
            TfTax.setText("R$" + df.format(imposto));

        } else if (salarioBruto <= 4664.68) {
            imposto = (3751.06f - 2826.66f) * 0.15f + (salarioBruto - 3751.06f)* 0.225f;
            TfTax.setText("R$" + df.format(imposto));

        } else {
            imposto = (4664.68f - 3751.06f) * 0.225f + (salarioBruto - 4664.68f) * 0.275f;
            TfTax.setText("R$" + df.format(imposto));
        }

       
    }//GEN-LAST:event_BtCalcularActionPerformed

    private void TfSalaryActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TfSalaryActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_TfSalaryActionPerformed

    private void TfEmailActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TfEmailActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_TfEmailActionPerformed

    private void BtDeleteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BtDeleteActionPerformed
        TfName.setText("");
        TfEmail.setText("");
        TfPhone.setText("");
        TfCfp.setText("");
        TfSalary.setText("");
        TfTax.setText("");
        
    }//GEN-LAST:event_BtDeleteActionPerformed

    private void BtSaveActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BtSaveActionPerformed
        if(TfName.getText().equals("") || TfEmail.getText().equals("")  
                || TfPhone.getText().equals("") ||  TfCfp.getText().equals("") 
                || TfSalary.getText().equals("") || TfTax.getText().equals(""))
            {
            JOptionPane.showMessageDialog(null, "Preencha todos os campos.");
        }else {
            Employee checkEmployee = new Employee();
            checkEmployee.setSalary(Float.parseFloat(TfSalary.getText()));
            checkEmployee.setEmail(TfEmail.getText());
            checkEmployee.setName(TfName.getText());
            checkEmployee.setPhone(TfPhone.getText());
            checkEmployee.setCPF(TfCfp.getText());
            checkEmployee.setOffice((String) JcbOffice.getSelectedItem());
            checkEmployee.setImposto(TfTax.getText());
            checkEmployee.fileSave();
            JOptionPane.showMessageDialog(null, "Cadastro realizado. ");
        }
    }//GEN-LAST:event_BtSaveActionPerformed

    private void TfCfpActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TfCfpActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_TfCfpActionPerformed

    private void JcbOfficeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_JcbOfficeActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_JcbOfficeActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(FrmEmployee.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(FrmEmployee.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(FrmEmployee.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(FrmEmployee.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FrmEmployee().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton BtCalcular;
    private javax.swing.JButton BtDelete;
    private javax.swing.JButton BtSave;
    private javax.swing.JComboBox<String> JcbOffice;
    private javax.swing.JTextField TfCfp;
    private javax.swing.JTextField TfEmail;
    private javax.swing.JTextField TfName;
    private javax.swing.JTextField TfPhone;
    private javax.swing.JTextField TfSalary;
    private javax.swing.JTextField TfTax;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JMenu jMenu1;
    // End of variables declaration//GEN-END:variables
}
