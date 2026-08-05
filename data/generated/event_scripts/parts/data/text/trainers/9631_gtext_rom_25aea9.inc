	@ data/text/trainers.inc:596 Route109_Text_HueyPostBattle
	.globl gText_Rom_25AEA9
gText_Rom_25AEA9: @ 0x0825AEA9
	.string "さいこーの みなとまちには\nさいこーの トレーナーが いたぜ……$"
	.if (. - gText_Rom_25AEA9) > 0x21
	.error "gText_Rom_25AEA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AEA9) < 0x21
	.space 0x21 - (. - gText_Rom_25AEA9)
	.endif
