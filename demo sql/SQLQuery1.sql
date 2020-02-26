/*Join
inner join ==> intersection of set
outer join ==> right outer
				left outer
				full join ==> union of set
				*/

create table x_men
(
	x_id int,
	x_name varchar(30),
	x_roll int
)
go
create table Avengers
(
	a_id int,
	a_name varchar(30),
	a_weapon varchar(40)
)

select * from x_men, Avengers

insert into x_men values(101, 'Magneto',23),(102,'Wolverine',21),
(103,'Jean',19),(104,'Xavier',10),(106,'deadpool',2)

insert into Avengers values(101,'Steve','Shield'),(103,'Thor','Hammer'),
(105,'Tony','Iron Suit'),(107, 'Scarlet','witch'),(108,'Bruice','green body')

select A.x_name, B.a_name, B.a_weapon
from
x_men A
inner join
Avengers B
on
A.x_id = B.a_id

select A.x_name, B.a_name, B.a_weapon
from
x_men A
full outer join
Avengers B
on
A.x_id = B.a_id

select A.x_name, B.a_name, B.a_weapon
from
x_men A
left outer join
Avengers B
on
A.x_id = B.a_id

select * from vwSciFi


-- fk, pk

create table neoRegister
(
	id int primary key,
	name varchar(30),
)
go
create table neoTeam
(
	id int foreign key references neoRegister(id),
	team varchar(30)
)


insert into neoRegister values(501, 'Ramprasad'),(502,'Shyam'),(503,'Hari')

insert into neoTeam values(502,'Cricket'),(502,'Tennis'),(501,'Football'),
(503,'Footbal')

insert into neoTeam values (504,'Cricket')

select * from neoRegister
select * from neoTeam
















