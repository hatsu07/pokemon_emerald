	@ data/maps/FallarborTown/scripts.inc:54 FallarborTown_Text_ShadyCharactersCozmosHome
	.globl gText_Rom_1E5ED4
gText_Rom_1E5ED4: @ 0x081E5ED4
	.string "なんだ なんだ!?\pソライシはかせの いえに\nあやしげな じんぶつが\lではいり しておった ようだが……$"
	.if (. - gText_Rom_1E5ED4) > 0x35
	.error "gText_Rom_1E5ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5ED4) < 0x35
	.space 0x35 - (. - gText_Rom_1E5ED4)
	.endif
