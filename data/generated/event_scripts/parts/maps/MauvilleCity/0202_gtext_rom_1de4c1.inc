	@ data/maps/MauvilleCity/scripts.inc:616 MauvilleCity_Text_NurseHurtMonBackToHealth
	.globl gText_Rom_1DE4C1
gText_Rom_1DE4C1: @ 0x081DE4C1
	.string "ポケモンしょうぶを するのも いいけど\pもしも じぶんの ポケモンが\nたたかいで きずついたり したなら\lやさしく いたわって あげなきゃね!$"
	.if (. - gText_Rom_1DE4C1) > 0x48
	.error "gText_Rom_1DE4C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE4C1) < 0x48
	.space 0x48 - (. - gText_Rom_1DE4C1)
	.endif
