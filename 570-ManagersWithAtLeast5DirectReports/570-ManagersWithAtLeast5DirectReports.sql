-- Last updated: 7/31/2025, 10:15:51 PM
# Write your MySQL query statement below
select e1.name from Employee e1
inner join Employee e2 on e1.id=e2.managerId 
group by e1.id having count(*)>=5; 