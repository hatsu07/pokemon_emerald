	@ data/text/pkmn_center_nurse.inc:1 gText_WouldYouLikeToRestYourPkmn
	.globl gText_Rom_24373C
gText_Rom_24373C: @ 0x0824373C
	.string "おつかれさまです!\nポケモン センター です\pここでは ポケモンの\nたいりょく かいふくを します\pあなたの ポケモンを\nやすませて あげますか?$"
	.if (. - gText_Rom_24373C) > 0x4a
	.error "gText_Rom_24373C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24373C) < 0x4a
	.space 0x4a - (. - gText_Rom_24373C)
	.endif
