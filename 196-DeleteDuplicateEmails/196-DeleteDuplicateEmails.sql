-- Last updated: 7/25/2025, 2:47:18 AM
# Write your MySQL query statement below
delete from person where id not in 
(select id from (select min(id) as id from person group by email) as minID);
