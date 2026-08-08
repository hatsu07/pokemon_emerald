	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:246 EverGrandeCity_ChampionsRoom_Text_BirchCongratulations
	.globl gText_Rom_210F04
gText_Rom_210F04: @ 0x08210F04
	.string "オダマキ『とにかく おめでとう!\pさあ むねをはって おくの へやに\nいってくるが いいよ!$"
	.if (. - gText_Rom_210F04) > 0x2f
	.error "gText_Rom_210F04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210F04) < 0x2f
	.space 0x2f - (. - gText_Rom_210F04)
	.endif
