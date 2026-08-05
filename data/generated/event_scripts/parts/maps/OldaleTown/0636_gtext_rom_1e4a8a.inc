	@ data/maps/OldaleTown/scripts.inc:346 OldaleTown_Text_IWorkAtPokemonMart
	.globl gText_Rom_1E4A8A
gText_Rom_1E4A8A: @ 0x081E4A8A
	.string "おれ フレンドリィショップの てんいん!\pきみ! きみ!\nちょっと ついてきて!$"
	.if (. - gText_Rom_1E4A8A) > 0x29
	.error "gText_Rom_1E4A8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4A8A) < 0x29
	.space 0x29 - (. - gText_Rom_1E4A8A)
	.endif
