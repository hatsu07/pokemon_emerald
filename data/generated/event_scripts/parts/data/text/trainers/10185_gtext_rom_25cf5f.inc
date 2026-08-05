	@ data/text/trainers.inc:1391 Route114_Text_TyraNotEnoughMons (+1 aliases)
	.globl gText_Rom_25CF5F
gText_Rom_25CF5F: @ 0x0825CF5F
	.string "カヨ『うふふ!\nあたしたちと しょうぶ するなら\lポケモン いっぴきじゃ ダメなのよ!$"
	.if (. - gText_Rom_25CF5F) > 0x2c
	.error "gText_Rom_25CF5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CF5F) < 0x2c
	.space 0x2c - (. - gText_Rom_25CF5F)
	.endif
