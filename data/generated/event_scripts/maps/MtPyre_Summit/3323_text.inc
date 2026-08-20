	@ data/maps/MtPyre_Summit/scripts.inc:445 MtPyre_Summit_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_2170BA
gText_Rom_2170BA: @ 0x082170BA
	.string "うーむ…… マグマだんに\nあいてを させれば よかった……{EOS}"
	.if (. - gText_Rom_2170BA) > 0x1e
	.error "gText_Rom_2170BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2170BA) < 0x1e
	.space 0x1e - (. - gText_Rom_2170BA)
	.endif
