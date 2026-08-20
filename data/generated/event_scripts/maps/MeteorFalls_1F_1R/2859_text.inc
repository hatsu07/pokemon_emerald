	@ data/maps/MeteorFalls_1F_1R/scripts.inc:234 MeteorFalls_1F_1R_Text_WithThisMeteorite
	.globl gText_Rom_212D71
gText_Rom_212D71: @ 0x08212D71
	.string "ウヒョヒョ……!\pこの いんせきが あれば\nえんとつやまの アイツが……{EOS}"
	.if (. - gText_Rom_212D71) > 0x25
	.error "gText_Rom_212D71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212D71) < 0x25
	.space 0x25 - (. - gText_Rom_212D71)
	.endif
