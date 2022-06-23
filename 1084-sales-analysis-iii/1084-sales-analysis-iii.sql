# Write your MySQL query statement below
SELECT
product_id,product_name 
FROM
Product 
WHERE product_id in
(SELECT product_id FROM Sales
GROUP BY 1
HAVING MIN(sale_date)>='2019-01-01' and MAX(sale_date) <='2019-03-31')