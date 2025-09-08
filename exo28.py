def annonce(num, prov, dest):
    if dest !="0":
        msg = f"le train n°{num} en provenance de {prov} et à destination de {dest}, entre en gare."
    else:
        msg = f"le train n°{num} en provenance de {prov} entre en gare. Ce train est terminus Triffouillis-les-Oies."
    return msg

# Le resultat attendu est "le train n°4557 en provenance de Paris et à destination de Marseille, entre en gare."
# Si dest = 0 alors il affichera "le train n°5768 en provenance de Bonneville entre en gare. Ce train est terminus Triffouillis-les-Oies"