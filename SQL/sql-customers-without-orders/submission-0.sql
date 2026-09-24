-- Write your query below
select c.name
from customers as c
left join orders as o
on o.customer_id = c.id
where o.customer_id is null;