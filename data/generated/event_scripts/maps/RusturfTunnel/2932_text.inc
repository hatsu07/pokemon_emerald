	@ data/maps/RusturfTunnel/scripts.inc:427 RusturfTunnel_Text_GruntIntro
	.globl gText_Rom_2139B0
gText_Rom_2139B0: @ 0x082139B0
	.string "えーい くっそー!\pうばった ポケモンは\nなんの やくにも たたないし\pいいところへ にげこめたと おもったのに\nこの トンネル いきどまり じゃねーか!\pやい! おまえ!\nおれと しょうぶ するんだな!?$"
	.if (. - gText_Rom_2139B0) > 0x68
	.error "gText_Rom_2139B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2139B0) < 0x68
	.space 0x68 - (. - gText_Rom_2139B0)
	.endif
