	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:318 BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou
	.globl gText_Rom_22325E
gText_Rom_22325E: @ 0x0822325E
	.string "もし きみが そばに いてくれたら\nぼくは なんだって できるのさ……$"
	.if (. - gText_Rom_22325E) > 0x24
	.error "gText_Rom_22325E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22325E) < 0x24
	.space 0x24 - (. - gText_Rom_22325E)
	.endif
