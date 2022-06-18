# Write your MySQL query statement below

SELECT id, 'Root' as type
from Tree
where p_id is NULL

UNION

SELECT DISTINCT id, 'Leaf' as type
from Tree
where p_id IS NOT NULL AND id not in (SELECT p_id FROM tree where p_id IS NOT NULL)


UNION

SELECT DISTINCT id, 'Inner' as type
from Tree
where p_id  IS NOT NULL AND id IN (SELECT p_id FROM tree where p_id IS NOT NULL)

ORDER BY id;