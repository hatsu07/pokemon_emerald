	@ data/text/trainers.inc:2030 Route119_Text_CatherinePostRematch
	.globl gText_Rom_25EA6F
gText_Rom_25EA6F: @ 0x0825EA6F
	.string "トレーナーの あなたが\nポケモンを たよって いるように\lポケモンも あなたを たよっているのよ!$"
	.if (. - gText_Rom_25EA6F) > 0x32
	.error "gText_Rom_25EA6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EA6F) < 0x32
	.space 0x32 - (. - gText_Rom_25EA6F)
	.endif
