	@ data/text/trainers.inc:575 Route109_Text_DavidDefeated (+1 aliases)
	.globl gText_Rom_25ADFF
gText_Rom_25ADFF: @ 0x0825ADFF
	.string "うりゃーっ!!\nまけたーっ!!{EOS}"
	.if (. - gText_Rom_25ADFF) > 0x10
	.error "gText_Rom_25ADFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ADFF) < 0x10
	.space 0x10 - (. - gText_Rom_25ADFF)
	.endif
