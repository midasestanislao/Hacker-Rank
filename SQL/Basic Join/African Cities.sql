SELECT CITY.Name FROM CITY
JOIN COUNTRY ON CITY.CountryCode = Country.Code
WHERE COUNTRY.Continent = 'Africa';