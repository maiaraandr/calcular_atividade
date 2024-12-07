# Funções para cálculo do valor futuro e valor presente
def calcular_valor_futuro(valor_presente, taxa_juros, periodos):
    return valor_presente * (1 + taxa_juros) ** periodos

def calcular_valor_presente(valor_futuro, taxa_juros, periodos):
    return valor_futuro / (1 + taxa_juros) ** periodos

# Problema 
vp1 = 1200
taxa1 = 0.09
n1 = 10
vf1 = round(calcular_valor_futuro(vp1, taxa1, n1), 3)
print(f"Joana Fulana terá ao final de {n1} anos: ${vf1:.1f}")

# Problema 2 
vp2 = 2000
taxa2 = 0.10 
n2 = 8
vf2 = round(calcular_valor_futuro(vp2, taxa2, n2), 3)
print(f"Joana Ciclana terá ao final de {n2} anos: ${vf2:.1f}")

# Problema 3 
vf3 = 12000
taxa3 = 0.09 
n3 = 10
vp3 = round(calcular_valor_presente(vf3, taxa3, n3), 3)
print(f"João Fulano precisa depositar aproximadamente: ${vp3:.1f}")

# Problema 4 
vf4 = 14000
taxa4 = 0.10
n4 = 12
vp4 = round(calcular_valor_presente(vf4, taxa4, n4), 3)
print(f"João Ciclana precisa depositar aproximadamente: ${vp4:.1f}")
