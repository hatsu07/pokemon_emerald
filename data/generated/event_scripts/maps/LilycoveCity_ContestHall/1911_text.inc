	@ data/maps/LilycoveCity_ContestHall/scripts.inc:319 LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks
	.globl gText_Rom_207B41
gText_Rom_207B41: @ 0x08207B41
	.string "さっき ゆうしょう した おにいさん\nすっごい たくさんの しゅるいの\lポロックを もってた！\pあれだけ もってれば\nゆうしょう できるのかな?$"
	.if (. - gText_Rom_207B41) > 0x49
	.error "gText_Rom_207B41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207B41) < 0x49
	.space 0x49 - (. - gText_Rom_207B41)
	.endif
