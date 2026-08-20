	@ data/maps/MtChimney/scripts.inc:633 MtChimney_Text_Grunt1Defeat (+1 aliases)
	.globl gText_Rom_2153F6
gText_Rom_2153F6: @ 0x082153F6
	.string "わたしの マイホームの ゆめが……{EOS}"
	.if (. - gText_Rom_2153F6) > 0x12
	.error "gText_Rom_2153F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2153F6) < 0x12
	.space 0x12 - (. - gText_Rom_2153F6)
	.endif
