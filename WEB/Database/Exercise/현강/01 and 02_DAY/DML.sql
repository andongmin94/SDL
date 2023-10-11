-- CREATE TABLE users (
--     first_name TEXT NOT NULL,
--     last_name TEXT NOT NULL,
--     age INTEGER NOT NULL,
--     country TEXT NOT NULL,
--     phone TEXT NOT NULL,
--     balance INTEGER NOT NULL
-- );

-- -- first-name 과 last_name을 모두 users 테이블에서
-- SELECT first_name, last_name FROM users;

-- -- 데이터를 조회하는 DML : SELECT 문에 동작 순서..age
-- SELECT : 4. 특정 열을 지정한다.
-- FROM : 1. 먼저 테이블을 가져온다.
-- WHERE : 2. 조건에 맞는 값들을 추린다.
-- GROUP - HAVING : 3. 내가 특정 데이터를 그룹핑 + 보여줄 조건을 지정
-- ORDER BY : 5. 정렬을 수행한다.
-- LIMIT : 6. 해당 데이터에서 가져올 갯수를 제한한다.

-- 모든 컬럼 조회
SELECT * FROM users;

-- 이름과 나이 컬럼 조회
SELECT last_name, age FROM users;

-- rowid 와 first_name 컬럼 조회
SELECT rowid, first_name FROM users;

-- '김'의 성을 가지고 있는 사람을 모두 조회하기
-- WHERE 절을 통해 조건을 탐색하며 조회
SELECT * FROM users WHERE last_name = '김';

-- '김'의 성을 가지고 있고, 나이가 20살 초과인 사람을 조회하기...
SELECT * FROM users WHERE age > 20 AND last_name = '김';

-- 나이가 20 이상이고, 30 미만인 사람을 조회...
SELECT * FROM users WHERE age BETWEEN 20 AND 29; -- age >= 20 AND age < 30;

-- 정렬 기준을 나이 오름차 순으로 조회
SELECT * FROM users WHERE age BETWEEN 20 AND 29 ORDER BY age ASC;

-- 정렬 기준을 나이 오름차순 그 후에 성을 내림차순으로 조회
SELECT * FROM users ORDER BY age ASC, last_name DESC;

-- 이름과 나이를 나이가 많은 순
SELECT first_name, age FROM users ORDER BY age DESC;

-- 이름과 나이 계좌를 나이가 어린 순으로, 같은 나이라면 잔고가 많은 순으로 정렬
SELECT first_name, age, balance FROM users ORDER BY age, balance DESC;

-- 모든 지역을 조회하라 (단, 중복 제거)
SELECT DISTINCT country FROM users;

-- 지역 순으로 정렬해서 모든 지역을 조회하라 (단, 중복 제거)
SELECT DISTINCT country FROM users ORDER BY country;

-- 이름과 지역이 중복없이 모든 이름과 지역을 조회하라 (단, 중복 제거)
SELECT DISTINCT first_name, country FROM users;
SELECT DISTINCT first_name, country FROM users ORDER BY country;

-- 나이가 30살 이상인 사람 이름 나이 계좌 잔고 조회
SELECT first_name, age, balance FROM users WHERE age >= 30;

-- 나이가 30살 이상이고 50만원 초과를 가지고 있는 사람 이름
SELECT first_name, age, balance FROM users WHERE age >= 30 AND balance > 500000;

-- 이름에 '호'가 들어가는 사람들의 성과 이름을 모두 조회...age
SELECT first_name, last_name FROM users WHERE first_name LIKE '%호%';

-- 이름이 '준'으로 끝나는 사람들의 성과 이름을 모두 조회...age
SELECT first_name, last_name FROM users WHERE first_name LIKE '%준';

-- 핸드폰 번호가 010으로 시작하는 사람들을 조회...
-- 이름과 핸드폰 번호
SELECT first_name, phone FROM users WHERE phone LIKE '010-%';

-- 서울 지역 전화번호를 가진 사람들의 이름과 전화번호 조회
SELECT first_name, phone FROM users WHERE phone LIKE '02-%';

-- 나이가 20대인 사람들 조회하기
SELECT first_name, age FROM users WHERE age BETWEEN 20 AND 29;
SELECT first_name, age FROM users WHERE age / 10 = 2;

-- 전화번호 중간 4자리가 51로 시작하는 사람들의 이름과 전화번호 조회
SELECT first_name, phone FROM users WHERE phone LIKE '%-51__-%';

-- 경기도와 강원도에 사는 사람들의 이름과 지역 조회하기
SELECT first_name, country FROM users WHERE country IN ('경기도', '강원도');

-- 경기도와 강원도에 살지 않는 사람들의 이름과 지역 조회하기
SELECT first_name, country FROM users WHERE country NOT IN ('경기도', '강원도');

-- 첫번째부터 열번째까지 데이터를 rowid와 이름 조회하기
SELECT rowid, first_name FROM users LIMIT 10;

-- 계좌 잔고가 가장 많은 10명의 이름과 잔고 조회하기
SELECT first_name, balance FROM users ORDER BY balance DESC LIMIT 10;

-- 나이가 가장 어린 5명의 나이와 이름을 조회하기
SELECT first_name, age FROM users ORDER BY age LIMIT 5;

-- 11번째부터 20번째까지 rowid와 이름 조회하기
SELECT rowid, first_name FROM users LIMIT 10 OFFSET 10;

-- users 테이블의 행의 갯수 출력하기
SELECT COUNT(*) AS ROW_COUNT FROM users;

-- users 테이블 내에서 잔액의 평균을 출력
SELECT AVG(balance) AS 평균 FROM users;

-- 모든 유저의 지역을 조회 (중복 X)
SELECT DISTINCT country FROM users;

-- 전라북도의 평균 잔고 출력
SELECT AVG(balance) AS 전라북도평균 FROM users WHERE country = '전라북도';

-- '각 지역별' 평균 잔고 출력
SELECT country, AVG(balance) FROM users GROUP BY country;

-- '각 지역별' 평균을 내림차순 평균으로 출력
SELECT country, AVG(balance) AS 평균 FROM users GROUP BY country ORDER BY 평균 DESC;

-- 나이가 30살 이상인 사람들의 평균 나이를 계산하라...
SELECT AVG(age) FROM users WHERE age >= 30;

-- '각 지역'별로 몇 명 살고 있는지를 조회...
SELECT country, COUNT(*) AS 인구수 FROM users GROUP BY country;

-- '성' 씨 별로 몇 명이 있는지 조회...
SELECT last_name AS 성, COUNT(*) AS 인구수 FROM users GROUP BY 성;

SELECT last_name AS 성, COUNT(*) AS 인구수 FROM users GROUP BY 성 ORDER by 인구수 DESC;

-- '각 지역별' 평균 나이 조회
SELECT country, AVG(age) AS 평균나이 FROM users GROUP BY country;


CREATE TABLE classmates (
    name TEXT NOT NULL,
    age INTEGER NOT NULL,
    address TEXT NOT NULL
);

-- INSERT 새로운 데이터를 테이블에 삽입
INSERT INTO classmates (name, age, address) VALUES ('김짱구', 25, '잘 모르겠음'), ('김맹구', 25, '떡잎마을');

INSERT INTO classmates (address, name, age) VALUES ('용상동', '권영정', 31);

INSERT INTO classmates VALUES ('지존', 99, '마교');

-- 2번째 데이터를 이름은 '김철수한무두루미', 주소는 '제주도'로 변경해달라...
UPDATE classmates SET name = '노예', address = '전라도', age = 60 WHERE rowid = 6;

-- 데이터 삭제
DELETE FROM classmates WHERE rowid = 7;

-- 이름 데이터 중에서 '영'이 포함된 행을 삭제
DELETE FROM classmates WHERE name LIKE '%영%';

-- 테이블의 모든 데이터를 삭제
DELETE FROM classmates;


CREATE TABLE articles (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    title TEXT NOT NULL,
    content TEXT NOT NULL,
    userid INTEGER NOT NULL
);

DROP TABLE users;

CREATE TABLE users (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    roleid INTEGER NOT NULL
);

INSERT INTO articles (title, content, userid) VALUES ('제목1', '내용1', 1), ('제목2', '내용2', 2), ('제목3', '내용3', 3);
INSERT INTO users (name, roleid) VALUES ('aiden', 1), ('ken', 2), ('lynda',3);


-- userid 값과 users의 id 값이 서로 같은 행만 남길 수 있을까
SELECT * FROM articles, users WHERE articles.userid = users.id;

-- INNER JOIN
SELECT * FROM articles INNER JOIN users ON articles.userid = users.id;

-- LEFT JOIN
SELECT * FROM articles LEFT JOIN users ON userid = users.id;

CREATE TABLE zoo (
  name TEXT NOT NULL,
  eat TEXT NOT NULL,
  weight INT NOT NULL,
  height INT,
  age INT
);

-- 1) 
INSERT INTO zoo VALUES 
(5, 180, 210, 'gorilla', 'omnivore');
-- 칼럼이랑 자료형이 일치하지 않음.

-- 2)
INSERT INTO zoo (rowid, name, eat, weight, age) VALUES
(10,'dolphin', 'carnivore', 210, 3),
(10, 'alligator', 'carnivore', 250, 50);
-- rowid가 중복됌.

-- 3)
INSERT INTO zoo (name, eat, age) VALUES
('dolphin', 'carnivore', 3);
-- NOT NULL 칼럼들에 데이터가 입력되지 않음.