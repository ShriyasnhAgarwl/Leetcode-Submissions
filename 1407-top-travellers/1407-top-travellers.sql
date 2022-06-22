# Write your MySQL query statement below
SELECT name, COALESCE(SUM(distance),0) travelled_distance
from Users U
LEFT JOIN Rides R ON U.id = R.user_id
group by U.id
Order BY travelled_distance DESC, name Asc