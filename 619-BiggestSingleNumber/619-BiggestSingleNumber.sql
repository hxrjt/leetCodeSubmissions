-- Last updated: 7/31/2025, 10:15:41 PM
# Write your MySQL query statement below
select max(num) as num from (select num from MyNumbers group by num having count(num)<2) as temp;