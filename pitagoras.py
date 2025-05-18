from math import sqrt

la  = int(input("Digite o cateto oposto do Triangulo retangulo: "))
co  = int(input("Digite o catato adjacente do Trinagulo retangulo: "))


s1 = la**2
s2 = co**2
s3 = s1 + s2
s3 = sqrt(s3)

print(f"O cateto oposto é: {s1}, e o cateto adjacente é: {s2}, e a hipotenusa é {s3:.2f}")


cato = la/s3
cata = co/s3
tang1 = la/co
tang2 = co/la

print(f"O seno é: {cato}, o cosseno é: {cata}, o tangente B é: {tang1}, o tangente C é: {tang2}")