-- Last updated: 7/25/2025, 2:55:46 AM
# Write your MySQL query statement below
select p1.firstName,p1.lastName,a1.city,a1.state from Person as p1
left join Address as a1
on p1.personId=a1.personId;