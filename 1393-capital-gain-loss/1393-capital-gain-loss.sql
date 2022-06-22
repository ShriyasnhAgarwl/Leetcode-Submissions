# Write your MySQL query statement below
SELECT
stock_name, 
SUM(IF(operation='Sell',price,Null))- SUM(IF(operation='Buy',price,NULL)) as capital_gain_loss
FROM
Stocks
GROUP BY stock_name;