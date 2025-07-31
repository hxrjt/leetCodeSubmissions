-- Last updated: 7/31/2025, 10:15:42 PM
# Write your MySQL query statement below
select id,movie,description,rating from Cinema where id%2!=0 and description not like 'boring' order by rating DESC;