-- Last updated: 7/31/2025, 10:15:11 PM
# Write your MySQL query statement below
select * from 
(select "Low Salary" as category,count(income) as accounts_count from Accounts where income<20000
union
select "Average Salary" as category,count(income) as accounts_count from Accounts where income between 20000 and 50000
union
select "High Salary" as category,count(income) as accounts_count from Accounts where income>50000) as temp 
order by accounts_count desc; 


-- select "Low Salary" as category,count(income) as accounts_count from Accounts where income<20000
-- union
-- select "Average Salary" as category,count(income) as accounts_count from Accounts where income between 20000 and 50000
-- union
-- select "High Salary" as category,count(income) as accounts_count from Accounts where income>50000;