# Write your MySQL query statement below
SELECT customer_id, COUNT(*) as count_no_trans FROM Visits where visit_id NOT IN 
(SELECT DISTINCT visit_id from Transactions) GROUP BY customer_id ORDER BY count_no_trans;