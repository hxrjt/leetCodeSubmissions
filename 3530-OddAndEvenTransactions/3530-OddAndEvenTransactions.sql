-- Last updated: 7/31/2025, 10:14:55 PM
# Write your MySQL query statement below
select transaction_date,
sum(case when amount%2!=0 then amount else 0 end) as odd_sum,
sum(case when amount%2=0 then amount else 0 end) as even_sum 
from transactions group by transaction_date order by transaction_date ASC;