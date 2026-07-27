SELECT teacher_id ,COUNT( DISTINCT subject_id) as cnt 
FROM Teacher
Group by teacher_id;