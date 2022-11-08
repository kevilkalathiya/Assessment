/* Create a nobel winner table And write sql query to solve the given problem : */

/* create nobel_win table */
CREATE TABLE nobel_win
(
    year int (100),
    subject varchar (100),
    winner varchar (100),
    country varchar (100),
    category varchar (100)
)

/* data insert into nobel_win table */
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1970,'physics','hannes alfven','sweden','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1970,'physics','louis neel','france','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1970,'chemistry','luis federico leloir','france','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1970,'physiology','ulf von euler','sweden','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1970,'physiology','bernard katz','germany','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1970,'literature','aleksandr solzhenitsyn ','russia','linguist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1970,'economics','paul samuelson','usa','economist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1970,'physiology','julius axelrod','usa','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1971,'physics','dennis gabor','hungary','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1971,'chemistry','gerhard herzberg','germany','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1971,'peace','willy brandt','germany','chancellor');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1971,'literature','pablo neruda','chile','linguist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1971,'economics','simon kuznets','russia','economist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1978,'peace','anwar al-sadat','egypt','president');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1978,'peace','menachem begin','israel','prime minister');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1987,'chemistry','donald j.cram','usa','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1987,'chemistry','jean-marie lehn','france','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1987,'physiology','susumu tonegawa','japan','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1994,'economics','reinhard seltan','germany','economist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1994,'peace','yitzhak rabin alfven','israel','prime minister');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1987,'physics','johannes georg bednorz','germany','scientist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1987,'literature','joseph brodsky','russia','linguist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1987,'economics','robert solow','usa','economist');
INSERT INTO nobel_win(year,subject,winner,country,category) VALUES (1994,'literature','kenzaburo oe','japan','linguist');

/* ● Write sql query to find the nobel prize winners of the year 1970. Return year,subject and winner.*/
     ans : SELECT year, subject, winner FROM nobel_win WHERE year = 1970

/* ● Write sql query to find the nobel prize winners in chemistry between the years 1965 and 1975.
     Begin and end values are included Return year, subject, winner and country.*/
     ans : SELECT * FROM `nobel_win` WHERE subject='chemistry' AND BETWEEN year>1965 AND year<1975

/* ● Write sql query to retrieve the details of the winners whose first name matches with the string ‘Louis’. Return year,subject,winner,country.*/
     ans : SELECT year,subject,winner,country FROM `nobel_win` WHERE winner LIKE '%louis%'

/* ● Write sql query to find Nobel prize winners for the subject that does not begin with the letter ‘P’.
     Order the result by year, descending and winner in ascending.*/
     ans : SELECT * FROM nobel_win WHERE winner NOT LIKE 'p%' ORDER by year DESC,winner ASC;

/* ● Write sql query to find the details of 1970 Nobel prize winners. Order the result by subject, ascending except for ‘Chemistry’ 
     and ‘Economics’ which will come at the end of the result set. Return year, subject, winner , country and category.*/
     ans : SELECT * FROM `nobel_win` WHERE year=1970 AND not subject='economics'AND NOT subject='chemistry';