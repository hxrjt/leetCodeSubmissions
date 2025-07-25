-- Last updated: 7/25/2025, 9:51:17 PM
select max(salary) as SecondHighestSalary from (select distinct salary from Employee order by salary DESC limit 1 offset 1) as temp;