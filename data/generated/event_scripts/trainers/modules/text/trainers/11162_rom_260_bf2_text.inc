	@ data/text/trainers.inc:2825 Route126_Text_NikkiIntro (+1 aliases)
	.globl gText_Rom_260BF2
gText_Rom_260BF2: @ 0x08260BF2
	.string "おほほほっ\nわたしは にんぎょ!{EOS}"
	.if (. - gText_Rom_260BF2) > 0x11
	.error "gText_Rom_260BF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260BF2) < 0x11
	.space 0x11 - (. - gText_Rom_260BF2)
	.endif
