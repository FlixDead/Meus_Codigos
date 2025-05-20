from random import choice
print("Jo ken po!!!")

while True:
    jogador = int(input("as suas opções são:\n1- pedra\n2- papel\n3- tesoura\nescolha: "))
    if jogador == 1:
        escolha_jogador = "pedra"
        break
    elif jogador == 2:
        escolha_jogador = "papel"
        break
    elif jogador == 3:
        escolha_jogador = "tesoura"
        break
    else:
        print("Escolha inválida. Tente novamente!!")

lista = ["pedra","papel","tesoura"]
escolha_maq = choice(lista)

print(f"Você escolheu {escolha_jogador} e a maquina escolheu {escolha_maq}")

if escolha_jogador == escolha_maq:
    print("Empate!!!")
elif (escolha_jogador == "pedra" and escolha_maq == "tesoura") or \
     (escolha_jogador == "papel" and escolha_maq == "pedra") or \
     (escolha_jogador == "tesoura" and escolha_maq == "papel"):
    print("Você ganhou!")
else:
    print("Você perdeu :c")
