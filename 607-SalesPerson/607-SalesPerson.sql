-- Last updated: 7/25/2025, 7:18:28 PM
# Write your MySQL query statement below
select name from SalesPerson where sales_id not in(
    select sales_id from Orders as o 
join Company as c on o.com_id=c.com_id where name='RED'
);
