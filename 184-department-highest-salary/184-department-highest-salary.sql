# Write your MySQL query statement below
select d.name as Department, e.name as Employee, e.Salary
from Department d join Employee e
on d.id= e.DepartmentId
where e.Salary =
(select max(salary) from employee
where departmentId=e.DepartmentId)