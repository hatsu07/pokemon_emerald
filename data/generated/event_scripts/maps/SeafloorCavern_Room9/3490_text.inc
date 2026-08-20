	@ data/maps/SeafloorCavern_Room9/scripts.inc:236 SeafloorCavern_Room9_Text_RedOrbShinesByItself
	.globl gText_Rom_218DD1
gText_Rom_218DD1: @ 0x08218DD1
	.string "べにいろのたまが……\nかってに かがやき はじめた……!?{EOS}"
	.if (. - gText_Rom_218DD1) > 0x1e
	.error "gText_Rom_218DD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218DD1) < 0x1e
	.space 0x1e - (. - gText_Rom_218DD1)
	.endif
