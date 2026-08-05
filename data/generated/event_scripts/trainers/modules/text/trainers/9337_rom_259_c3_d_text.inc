	@ data/text/trainers.inc:163 Route103_Text_RhettDefeated (+1 aliases)
	.globl gText_Rom_259C3D
gText_Rom_259C3D: @ 0x08259C3D
	.string "うぉっ できる!"
	.byte EOS
	.if (. - gText_Rom_259C3D) > 0x9
	.error "gText_Rom_259C3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C3D) < 0x9
	.space 0x9 - (. - gText_Rom_259C3D)
	.endif
