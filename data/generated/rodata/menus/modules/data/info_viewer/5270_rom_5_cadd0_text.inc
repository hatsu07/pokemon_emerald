	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_5CADD0
gText_Rom_5CADD0: @ 0x085CADD0
	.string "とじる{EOS}"
	.if (. - gText_Rom_5CADD0) > 0x4
	.error "gText_Rom_5CADD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADD0) < 0x4
	.space 0x4 - (. - gText_Rom_5CADD0)
	.endif
	@ Decoded text from ROM range: offset=0x5CADD4, size=0x5
	.string "　5BP{EOS}"
