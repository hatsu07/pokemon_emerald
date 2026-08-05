	@ asm/battle_records.s:701 ShowLinkBattleRecords
	.globl gText_Rom_593801
gText_Rom_593801: @ 0x08593801
	.string "かち　　　　まけ　　　ひきわけ$"
	.if (. - gText_Rom_593801) > 0x10
	.error "gText_Rom_593801 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_593801) < 0x10
	.space 0x10 - (. - gText_Rom_593801)
	.endif
