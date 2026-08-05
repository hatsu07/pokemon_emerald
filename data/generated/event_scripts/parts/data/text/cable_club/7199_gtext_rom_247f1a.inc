	@ data/text/cable_club.inc:102 CableClub_Text_TrainerCardDataOverwritten
	.globl gText_Rom_247F1A
gText_Rom_247F1A: @ 0x08247F1A
	.string "トレーナーカードの\nきろくを かきかえます!$"
	.if (. - gText_Rom_247F1A) > 0x17
	.error "gText_Rom_247F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F1A) < 0x17
	.space 0x17 - (. - gText_Rom_247F1A)
	.endif
