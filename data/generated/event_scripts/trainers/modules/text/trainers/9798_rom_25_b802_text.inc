	@ data/text/trainers.inc:839 Route110_Text_DaleDefeated (+1 aliases)
	.globl gText_Rom_25B802
gText_Rom_25B802: @ 0x0825B802
	.string "まけたっ!\nくやしいっ!!{EOS}"
	.if (. - gText_Rom_25B802) > 0xe
	.error "gText_Rom_25B802 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B802) < 0xe
	.space 0xe - (. - gText_Rom_25B802)
	.endif
