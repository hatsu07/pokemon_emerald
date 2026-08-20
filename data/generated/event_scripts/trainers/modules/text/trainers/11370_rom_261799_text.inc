	@ data/text/trainers.inc:3134 Route131_Text_RichardIntro (+1 aliases)
	.globl gText_Rom_261799
gText_Rom_261799: @ 0x08261799
	.string "うみには ポケモンが たくさん いるからね\nおよいで わたるのも くろう するよ!{EOS}"
	.if (. - gText_Rom_261799) > 0x2a
	.error "gText_Rom_261799 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261799) < 0x2a
	.space 0x2a - (. - gText_Rom_261799)
	.endif
