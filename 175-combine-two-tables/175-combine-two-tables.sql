# Write your MySQL query statement below

SELECT firstName, lastName, city, state 
from person as p left join address as a 
on p.personid = a.personid