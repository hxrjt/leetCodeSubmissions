-- Last updated: 7/31/2025, 10:16:31 PM
select max(salary) as SecondHighestSalary from Employee where salary<(select max(salary) from Employee);