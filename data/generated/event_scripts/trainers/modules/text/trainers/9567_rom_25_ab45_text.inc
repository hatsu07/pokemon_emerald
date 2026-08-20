	@ data/text/trainers.inc:503 Route107_Text_CamronPostBattle
	.globl gText_Rom_25AB45
gText_Rom_25AB45: @ 0x0825AB45
	.string "こ このあと まだ\nすいえい ランニングが のこっているぜ\lだいじょうぶか おれ……?{EOS}"
	.if (. - gText_Rom_25AB45) > 0x2c
	.error "gText_Rom_25AB45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AB45) < 0x2c
	.space 0x2c - (. - gText_Rom_25AB45)
	.endif
