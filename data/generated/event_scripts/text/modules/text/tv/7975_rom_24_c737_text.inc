	@ data/text/tv.inc:1138 LilycoveCity_ContestLobby_Text_LookingForwardToNextContest
	.globl gText_Rom_24C737
gText_Rom_24C737: @ 0x0824C737
	.string "こんどの ポケモンコンテストも\nたのしみに してますよ!$"
	.if (. - gText_Rom_24C737) > 0x1d
	.error "gText_Rom_24C737 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C737) < 0x1d
	.space 0x1d - (. - gText_Rom_24C737)
	.endif
