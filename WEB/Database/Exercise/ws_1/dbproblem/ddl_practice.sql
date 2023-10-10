SELECT first_name, age, balance FROM users ORDER BY age ASC, balance DESC;

SELECT first_name, country FROM users WHERE first_name = '건우' AND country = '경기도';

SELECT first_name, age FROM users WHERE country NOT IN ('경기도', '강원도') AND age BETWEEN 20 AND 30 ORDER BY age ASC;

SELECT first_name, phone, country FROM users WHERE phone LIKE '%-51__-%' AND country != '서울';

SELECT * FROM users ORDER BY age ASC LIMIT 20 OFFSET 40;