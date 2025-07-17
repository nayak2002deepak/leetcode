# Write your MySQL query statement below
SELECT e.name
FROM EMployee e
JOIN (SELECT managerId
FROM Employee
where managerId IS NOT NULL
GROUP BY managerId
HAVING COUNT(*)>=5) m ON e.id=m.managerId; 