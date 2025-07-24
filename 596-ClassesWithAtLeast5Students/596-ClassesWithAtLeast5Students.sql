-- Last updated: 7/25/2025, 1:49:11 AM
# Write your MySQL query statement below
select class from Courses group by class having count(class)>4