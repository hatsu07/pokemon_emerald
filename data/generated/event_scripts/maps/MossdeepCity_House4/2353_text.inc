	@ data/maps/MossdeepCity_House4/scripts.inc:48 MossdeepCity_House4_Text_YouMadeSecretBaseNearX
	.globl gText_Rom_20CD10
gText_Rom_20CD10: @ 0x0820CD10
	.string "ひょっとして {STR_VAR_1} に\nひみつきち つくったの きみ?{EOS}"
	.if (. - gText_Rom_20CD10) > 0x1c
	.error "gText_Rom_20CD10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CD10) < 0x1c
	.space 0x1c - (. - gText_Rom_20CD10)
	.endif
