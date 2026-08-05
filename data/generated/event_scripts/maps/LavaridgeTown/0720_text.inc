	@ data/maps/LavaridgeTown/scripts.inc:333 LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg
	.globl gText_Rom_1E5BE6
gText_Rom_1E5BE6: @ 0x081E5BE6
	.string "タマゴと いっしょに\nたーっぷり あるいて おくれ!$"
	.if (. - gText_Rom_1E5BE6) > 0x1b
	.error "gText_Rom_1E5BE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5BE6) < 0x1b
	.space 0x1b - (. - gText_Rom_1E5BE6)
	.endif
