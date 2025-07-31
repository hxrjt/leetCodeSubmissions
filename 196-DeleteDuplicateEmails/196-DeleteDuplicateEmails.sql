-- Last updated: 7/31/2025, 10:16:22 PM
# Write your MySQL query statement below
delete from person where id not in 
(select id from (select min(id) as id from person group by email) as minID);
