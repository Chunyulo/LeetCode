# Write your MySQL query statement below
select Name as Employee from Employee emp where Salary>(select Salary from Employee where Id=emp.ManagerId);
