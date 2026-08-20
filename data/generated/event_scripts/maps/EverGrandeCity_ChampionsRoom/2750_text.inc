	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:255 EverGrandeCity_ChampionsRoom_Text_MayCongratulations
	.globl gText_Rom_210FD2
gText_Rom_210FD2: @ 0x08210FD2
	.string "ハルカ『……がーん!\p…… …… ……\n…… …… ……\pなーんてね いいの いいの!\nだって そういう きまり だもんね!\p{PLAYER}{KUN}!\nほんとうに おめでとう!!{EOS}"
	.if (. - gText_Rom_210FD2) > 0x53
	.error "gText_Rom_210FD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210FD2) < 0x53
	.space 0x53 - (. - gText_Rom_210FD2)
	.endif
