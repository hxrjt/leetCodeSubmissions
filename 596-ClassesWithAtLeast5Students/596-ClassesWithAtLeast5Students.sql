-- Last updated: 7/31/2025, 10:15:45 PM
# Write your MySQL query statement below
select class from Courses group by class having count(class)>4