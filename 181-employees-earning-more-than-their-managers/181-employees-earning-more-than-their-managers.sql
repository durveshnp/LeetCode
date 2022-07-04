# Write your MySQL query statement below

SELECT name as Employee FROM Employee as E1 WHERE
salary > (SELECT salary from Employee E2 WHERE 
         E1.managerId = E2.id);