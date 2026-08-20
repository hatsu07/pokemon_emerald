	@ data/text/trainers.inc:1844 Route117_Text_AishaDefeat (+1 aliases)
	.globl gText_Rom_25E2D9
gText_Rom_25E2D9: @ 0x0825E2D9
	.string "まけても くやしがったり しない!\nそんなひまが あったら とっくんよ{EOS}"
	.if (. - gText_Rom_25E2D9) > 0x24
	.error "gText_Rom_25E2D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E2D9) < 0x24
	.space 0x24 - (. - gText_Rom_25E2D9)
	.endif
