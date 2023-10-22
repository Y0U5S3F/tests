create table Employe{

}

DECLARE v_emp Employe%ROWTYPE;
BEGIN
v_emp.salaire := 1500;
v_emp.nom := 'Salah';
dbms_output.put_line('Nom : '||v_emp.nom);
END;
/