-- Last updated: 7/31/2025, 10:15:15 PM
# Write your MySQL query statement below
select user_id,count(follower_id) as followers_count 
from Followers group by user_id order by user_id asc; 