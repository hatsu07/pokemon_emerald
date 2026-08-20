	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:977 LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries
	.globl gText_Rom_2073F8
gText_Rom_2073F8: @ 0x082073F8
	.string "ポロック つくって いれて!\pでね ポロック つくる ときは\nみんなが ちがう きのみで\lつくらないと ダメ なんだよ!{EOS}"
	.if (. - gText_Rom_2073F8) > 0x3d
	.error "gText_Rom_2073F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2073F8) < 0x3d
	.space 0x3d - (. - gText_Rom_2073F8)
	.endif
