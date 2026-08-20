	@ data/text/trainers.inc:3182 Route131_Text_IanIntro (+1 aliases)
	.globl gText_Rom_2619E1
gText_Rom_2619E1: @ 0x082619E1
	.string "カツ『きょうだい ちからを あわせて\nがんばりまーす!!{EOS}"
	.if (. - gText_Rom_2619E1) > 0x1d
	.error "gText_Rom_2619E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2619E1) < 0x1d
	.space 0x1d - (. - gText_Rom_2619E1)
	.endif
