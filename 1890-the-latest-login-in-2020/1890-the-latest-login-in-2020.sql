# Write your MySQL query statement below
SELECT user_id, max(time_stamp) as last_stamp
FROM Logins
WHERE time_stamp like '2020%'
GROUP BY user_id;
