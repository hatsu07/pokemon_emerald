	@ data/maps/MtChimney/scripts.inc:665 MtChimney_Text_Bufoh
	.globl gText_Rom_2154F9
gText_Rom_2154F9: @ 0x082154F9
	.string "ぶふぉー!!{EOS}"
	.if (. - gText_Rom_2154F9) > 0x7
	.error "gText_Rom_2154F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2154F9) < 0x7
	.space 0x7 - (. - gText_Rom_2154F9)
	.endif
