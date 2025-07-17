# Write your MySQL query statement below
SELECT customer_id
From customer
Group By customer_id
Having count(Distinct product_key)=(select count(*) FROM Product);