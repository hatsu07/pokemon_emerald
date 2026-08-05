	@ data/maps/EverGrandeCity_HallOfFame/scripts.inc:82 EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions
	.globl gText_Rom_211369
gText_Rom_211369: @ 0x08211369
	.string "ミクリ『ここは……\pはげしい たたかいを かちぬいた\nポケモンを きろくする ばしょ\pリーグ チャンピオンの\nえいこうを たたえる ための へやさ!$"
	.if (. - gText_Rom_211369) > 0x4b
	.error "gText_Rom_211369 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211369) < 0x4b
	.space 0x4b - (. - gText_Rom_211369)
	.endif
