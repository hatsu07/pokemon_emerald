	@ data/text/trainers.inc:1067 Route111_Text_CelinaDefeat (+1 aliases)
	.globl gText_Rom_25C20C
gText_Rom_25C20C: @ 0x0825C20C
	.string "す ……ごい\nなんて つよいの{EOS}"
	.if (. - gText_Rom_25C20C) > 0x10
	.error "gText_Rom_25C20C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C20C) < 0x10
	.space 0x10 - (. - gText_Rom_25C20C)
	.endif
