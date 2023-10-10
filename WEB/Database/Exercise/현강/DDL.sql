CREATE TABLE contacts (
    name VARCHAR(100) NOT NULL,
    age INTEGER NOT NULL,
    email TEXT NOT NULL UNIQUE
);

-- ALTER
-- 1. 테이블 이름 변경
ALTER TABLE contacts RENAME TO new_contacts;

-- 2. 컬럼 이름 변경
ALTER TABLE new_contacts RENAME COLUMN name TO last_name;

-- 3-1. 컬럼 추가 address
ALTER TABLE new_contacts ADD COLUMN address TEXT NOT NULL DEFAULT "UNKNOWN";

-- 3-2. 컬럼 삭제 address
ALTER TABLE new_contacts DROP COLUMN address;

-- 테이블 삭제 DROP TABLE
DROP TABLE new_contacts;