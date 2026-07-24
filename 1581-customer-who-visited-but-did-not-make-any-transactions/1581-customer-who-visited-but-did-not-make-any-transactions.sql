# Write your MySQL query statement below
SELECT  Visits.customer_id, COUNT(Visits.visit_id) AS count_no_trans
FROM Visits LEFT JOIN Transactions
ON Visits.Visit_id=Transactions.visit_id
WHERE Transactions.amount IS NULL 
GROUP BY Visits.customer_id; 