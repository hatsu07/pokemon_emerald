	@ data/text/trainers.inc:3380 Route134_Text_HitoshiPostBattle
	.globl gText_Rom_262170
gText_Rom_262170: @ 0x08262170
	.string "じぶんから しょうぶを いどんでおいて\nまけるとは…… はずかしすぎる……$"
	.if (. - gText_Rom_262170) > 0x26
	.error "gText_Rom_262170 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262170) < 0x26
	.space 0x26 - (. - gText_Rom_262170)
	.endif
