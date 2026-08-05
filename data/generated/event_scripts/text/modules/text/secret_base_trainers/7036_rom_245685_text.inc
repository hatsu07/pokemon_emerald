	@ data/text/secret_base_trainers.inc:106 SecretBase_Text_Trainer7PreChampion
	.globl gText_Rom_245685
gText_Rom_245685: @ 0x08245685
	.string "わたし グッズの おかいものが\nだいすき です\pそれと おなじくらい ポケモンを そだてるの\nだいすき です$"
	.if (. - gText_Rom_245685) > 0x37
	.error "gText_Rom_245685 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245685) < 0x37
	.space 0x37 - (. - gText_Rom_245685)
	.endif
