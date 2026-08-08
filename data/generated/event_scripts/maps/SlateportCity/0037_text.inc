	@ data/maps/SlateportCity/scripts.inc:1015 SlateportCity_Text_QuitPushing
	.globl gText_Rom_1DCD3C
gText_Rom_1DCD3C: @ 0x081DCD3C
	.string "ちょっと あんた! おさないでよ!\nじゅんばん なんだから!$"
	.if (. - gText_Rom_1DCD3C) > 0x1f
	.error "gText_Rom_1DCD3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCD3C) < 0x1f
	.space 0x1f - (. - gText_Rom_1DCD3C)
	.endif
