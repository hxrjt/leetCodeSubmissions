-- Last updated: 7/25/2025, 2:47:08 AM
# Write your MySQL query statement below
select e1.name,b1.bonus from Employee as e1
left join Bonus as b1
on e1.empID=b1.empID where b1.bonus<1000 or b1.bonus is NULL;