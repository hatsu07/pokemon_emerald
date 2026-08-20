	@ data/maps/MtPyre_Summit/scripts.inc:453 MtPyre_Summit_Text_Grunt3Intro (+1 aliases)
	.globl gText_Rom_2170F9
gText_Rom_2170F9: @ 0x082170F9
	.string "おまえ…… えんとつやまで あったな!\pどっちの だんいん でもないのに\nなぜ こんな ところに いるんだ!?{EOS}"
	.if (. - gText_Rom_2170F9) > 0x38
	.error "gText_Rom_2170F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2170F9) < 0x38
	.space 0x38 - (. - gText_Rom_2170F9)
	.endif
