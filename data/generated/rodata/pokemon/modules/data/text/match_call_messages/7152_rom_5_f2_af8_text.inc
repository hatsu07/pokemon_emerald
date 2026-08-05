	@ src/data/text/match_call_messages.h:47 gText_MatchCallHexManiac_Valerie_Pokemon
	.globl gText_Rom_5F2AF8
gText_Rom_5F2AF8: @ 0x085F2AF8
	.string "よるに であうと こわいです$"
	.if (. - gText_Rom_5F2AF8) > 0xf
	.error "gText_Rom_5F2AF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2AF8) < 0xf
	.space 0xf - (. - gText_Rom_5F2AF8)
	.endif
