	@ data/text/tv.inc:1135 LilycoveCity_ContestLobby_Text_PleaseDoShareStoryWithMe
	.globl gText_Rom_24C713
gText_Rom_24C713: @ 0x0824C713
	.string "そうですか……\pこんど おもしろいことが あれば\nきかせて くださいね$"
	.if (. - gText_Rom_24C713) > 0x24
	.error "gText_Rom_24C713 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C713) < 0x24
	.space 0x24 - (. - gText_Rom_24C713)
	.endif
