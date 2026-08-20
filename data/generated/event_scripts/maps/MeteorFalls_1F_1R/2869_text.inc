	@ data/maps/MeteorFalls_1F_1R/scripts.inc:276 MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma
	.globl gText_Rom_212F20
gText_Rom_212F20: @ 0x08212F20
	.string "アオギリさま\nマグマだんを おいかけないと……{EOS}"
	.if (. - gText_Rom_212F20) > 0x18
	.error "gText_Rom_212F20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212F20) < 0x18
	.space 0x18 - (. - gText_Rom_212F20)
	.endif
