-- Last updated: 7/31/2025, 10:15:44 PM
# Write your MySQL query statement below
select name from SalesPerson where sales_id not in(
    select sales_id from Orders as o 
join Company as c on o.com_id=c.com_id where name='RED'
);
