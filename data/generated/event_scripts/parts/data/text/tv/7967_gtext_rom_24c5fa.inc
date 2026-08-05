	@ data/text/tv.inc:1126 LilycoveCity_ContestLobby_Text_DescribeContest
	.globl gText_Rom_24C5FA
gText_Rom_24C5FA: @ 0x0824C5FA
	.string "ほんとう ですか!\nありがとう ございます\pそれでは いまの コンテストの かんそうを\nひとことで おねがいします!$"
	.if (. - gText_Rom_24C5FA) > 0x3b
	.error "gText_Rom_24C5FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C5FA) < 0x3b
	.space 0x3b - (. - gText_Rom_24C5FA)
	.endif
