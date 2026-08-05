	@ data/text/berries.inc:26 Route111_Text_GoingToTryToMakeDifferentColorBerries
	.globl gText_Rom_2638C8
gText_Rom_2638C8: @ 0x082638C8
	.string "がんばって いろんな いろの\nきのみを そだてるんだ!\l{STR_VAR_1}も がんばってね!$"
	.if (. - gText_Rom_2638C8) > 0x28
	.error "gText_Rom_2638C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2638C8) < 0x28
	.space 0x28 - (. - gText_Rom_2638C8)
	.endif
