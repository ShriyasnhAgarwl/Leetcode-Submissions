# Write your MySQL query statement below
SELECT name
FROM SalesPerson
WHERE sales_id
NOT IN (SELECT o.sales_id from Orders o JOIN Company c WHERE o.com_id = c.com_id and c.name="RED");