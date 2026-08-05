	@ data/text/tv.inc:1123 LilycoveCity_ContestLobby_Text_InterviewRequest
	.globl gText_Rom_24C585
gText_Rom_24C585: @ 0x0824C585
	.string "おや? あなた ポケモンコンテストに\nさんかして いましたね!\lその ポケモンを みれば わかりますよ!\pわたくし ポケモンコンテストに ついて\nきじを かいて いるのですが\pできれば すこし かんそうを\nきかせて くれませんかね?$"
	.if (. - gText_Rom_24C585) > 0x75
	.error "gText_Rom_24C585 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C585) < 0x75
	.space 0x75 - (. - gText_Rom_24C585)
	.endif
