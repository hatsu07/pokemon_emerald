	@ src/strings.c:120 gText_LeagueChamp
	.globl gText_Rom_5C9337
gText_Rom_5C9337: @ 0x085C9337
	.string "リーグ チャンピオン! おめでとう!$"
	.if (. - gText_Rom_5C9337) > 0x13
	.error "gText_Rom_5C9337 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9337) < 0x13
	.space 0x13 - (. - gText_Rom_5C9337)
	.endif
	.space 0x1, 0xFF
