	@ data/maps/MossdeepCity/scripts.inc:312 MossdeepCity_Text_StevensHouseOverThere
	.globl gText_Rom_1E1831
gText_Rom_1E1831: @ 0x081E1831
	.string "ダイゴさんの いえなら すぐそこだよ!{EOS}"
	.if (. - gText_Rom_1E1831) > 0x14
	.error "gText_Rom_1E1831 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1831) < 0x14
	.space 0x14 - (. - gText_Rom_1E1831)
	.endif
