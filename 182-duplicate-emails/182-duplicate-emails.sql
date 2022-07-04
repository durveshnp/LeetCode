# Write your MySQL query statement below
SELECT DISTINCT email as Email from Person as P1 
WHERE email IN (SELECT email from Person as P2 
               WHERE P1.id <> P2.id);