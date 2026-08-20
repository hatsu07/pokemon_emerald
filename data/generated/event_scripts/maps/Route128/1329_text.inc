	@ data/maps/Route128/scripts.inc:259 Route128_Text_StevenWhatIsHappening
	.globl gText_Rom_1EF1AB
gText_Rom_1EF1AB: @ 0x081EF1AB
	.string "ダイゴ『{PLAYER}{KUN}!\nこれは いったい……?{EOS}"
	.if (. - gText_Rom_1EF1AB) > 0x16
	.error "gText_Rom_1EF1AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EF1AB) < 0x16
	.space 0x16 - (. - gText_Rom_1EF1AB)
	.endif
