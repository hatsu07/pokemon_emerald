	@ data/maps/SootopolisCity/scripts.inc:1435 SootopolisCity_Text_PrettyMonCameFromSky
	.globl gText_Rom_1E2FBE
gText_Rom_1E2FBE: @ 0x081E2FBE
	.string "きれいな ポケモン\nおそらから おりて きた……$"
	.if (. - gText_Rom_1E2FBE) > 0x19
	.error "gText_Rom_1E2FBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2FBE) < 0x19
	.space 0x19 - (. - gText_Rom_1E2FBE)
	.endif
