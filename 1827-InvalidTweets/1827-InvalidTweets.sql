-- Last updated: 7/31/2025, 10:15:17 PM
# Write your MySQL query statement below
select tweet_id from Tweets where char_length(content)>15;

-- use char_length() for char count, unlike length() gives byte count