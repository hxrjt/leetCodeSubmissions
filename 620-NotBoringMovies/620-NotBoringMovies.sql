-- Last updated: 7/25/2025, 2:47:05 AM
# Write your MySQL query statement below
select id,movie,description,rating from Cinema where id%2!=0 and description not like 'boring' order by rating DESC;