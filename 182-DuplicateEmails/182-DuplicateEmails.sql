-- Last updated: 7/31/2025, 10:16:26 PM
# Write your MySQL query statement below

-- select Email from (select email,count(email) as cnt from Person group by email) as temp where cnt>1;

select Email from person
group by email having count(email)>1;