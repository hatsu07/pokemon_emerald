	@ data/maps/RusturfTunnel/scripts.inc:454 RusturfTunnel_Text_WandaReunion
	.globl gText_Rom_213CB3
gText_Rom_213CB3: @ 0x08213CB3
	.string "ミチルさん!\nこれから いつでも あえます!\pミチル『よかった…… です\pさあ わたしの いえで\nゆっくり やすんで ください$"
	.if (. - gText_Rom_213CB3) > 0x40
	.error "gText_Rom_213CB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213CB3) < 0x40
	.space 0x40 - (. - gText_Rom_213CB3)
	.endif
