create table employee(
emp_name varchar(40),
emp_age int,
emp_salary int,
constraint emp_salary_check check(emp_salary >= 50000)
);
insert into employee values("khushboo",21,90000);
insert into employee values("parth",20,100000);
insert into employee values("naman",21,50000);
select *  from employee
where emp_age>20 and emp_salary>80000;
select * from employee
order by emp_age asc;

select max(emp_age)
from employee;

select avg(emp_salary)
from employee;

select * from employee;
