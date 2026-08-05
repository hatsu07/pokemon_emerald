	@ data/text/trainers.inc:2312 Route121_Text_JoyPostBattle
	.globl gText_Rom_25F64E
gText_Rom_25F64E: @ 0x0825F64E
	.string "ユイ『えへっ!\nまた センパイと いっしょに とっくんね!$"
	.if (. - gText_Rom_25F64E) > 0x1e
	.error "gText_Rom_25F64E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F64E) < 0x1e
	.space 0x1e - (. - gText_Rom_25F64E)
	.endif
