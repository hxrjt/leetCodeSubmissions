-- Last updated: 7/31/2025, 10:15:50 PM
# Write your MySQL query statement below
select e1.name,b1.bonus from Employee as e1
left join Bonus as b1
on e1.empID=b1.empID where b1.bonus<1000 or b1.bonus is NULL;