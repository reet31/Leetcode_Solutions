SELECT  ROUND(
    COUNT(IF(order_date = customer_pref_delivery_date, 1, NULL)) * 100.0
    / COUNT(*),
    2
) AS immediate_percentage 
FROM Delivery d1
WHERE order_date = (
    SELECT MIN(order_date)
    FROM Delivery d2
    WHERE d2.customer_id = d1.customer_id
);
