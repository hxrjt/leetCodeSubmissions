-- Last updated: 7/25/2025, 10:27:32 PM
# Write your MySQL query statement below

-- select teacher_id, count(sid) as cnt from (select distinct teacher_id,subject_id as sid from Teacher) as temp group by teacher_id;

select teacher_id,count(distinct subject_id) as cnt from Teacher group by teacher_id;

