/* create customer and salesman table and write sql query to solve the given problem : */

/* create salesman table */
CREATE TABLE salesman
(
  salesman_id int(100) PRIMARY KEY,
  name varchar(100),
  city varchar (100),
  commission float(53)
)

/* data insert into salesman table */
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5001,'james hoog','new york',0.15);
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5002,'nail knite','paris',0.13);
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5005,'pit alex','london',0.11);
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5006,'mc lyon','paris',0.14);
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5007,'paul adam','rome',0.13);
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5003,'lauson hen','san jose',0.12)

/* create customer table */
CREATE TABLE customer
(
    customer_id int (100),
    cust_name varchar(100),
    city varchar(100),
    grade int (100),
    salesman_id int (100) 
    FOREIGN KEY customer(salesman_id) REFERENCES salesman(salesman_id)
)

/* data insert into customer table */
INSERT INTO customer(customer_id,cust_name,city,grade,salesman_id) VALUES (3002,'nick rimando','new york',100,5001);
INSERT INTO customer(customer_id,cust_name,city,grade,salesman_id) VALUES (3007,'brad davis','new york',200,5001);
INSERT INTO customer(customer_id,cust_name,city,grade,salesman_id) VALUES (3005,'graham zusi','califonia',200,5002);
INSERT INTO customer(customer_id,cust_name,city,grade,salesman_id) VALUES (3008,'julian green','london',300,5002);
INSERT INTO customer(customer_id,cust_name,city,grade,salesman_id) VALUES (3004,'fabian johnson','paris',300,5006);
INSERT INTO customer(customer_id,cust_name,city,grade,salesman_id) VALUES (3009,'geoff cameron','berlin',100,5003);
INSERT INTO customer(customer_id,cust_name,city,grade,salesman_id) VALUES (3003,'jozy altidor','moscow',200,5007);
INSERT INTO customer(customer_id,cust_name,city,salesman_id) VALUES (3001,'brad guzan','london',5005)

/* ● From the above given tables write a SQL query to find the salesperson(s) and the customer(s) represented here.
     Return the Customer Name, City, Salesman,commission. */

     SQL query :
     SELECT cust_name,customer.city,name,salesman.city,commission FROM `customer`JOIN salesman ON customer.salesman_id=salesman.salesman_id