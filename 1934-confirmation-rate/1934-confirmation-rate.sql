SELECT S.user_id, Round(IFNULL(AVG(C.action="confirmed"),0),2) AS confirmation_rate
FROM Signups AS S
Left Join Confirmations AS C
ON S.user_id=C.user_id
GROUP BY S.user_id;