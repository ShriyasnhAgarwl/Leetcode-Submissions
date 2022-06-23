# Write your MySQL query statement below
SELECT
a.name, sum(b.amount) as balance
FROM
Users a
INNER JOIN 
Transactions b
ON a.account =b.account 
GROUP BY b.account
HAVING balance>10000