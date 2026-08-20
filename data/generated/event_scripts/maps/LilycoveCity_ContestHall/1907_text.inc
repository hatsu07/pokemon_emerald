	@ data/maps/LilycoveCity_ContestHall/scripts.inc:313 LilycoveCity_ContestHall_Text_TodayWonSmartnessContest
	.globl gText_Rom_207A83
gText_Rom_207A83: @ 0x08207A83
	.string "うつくしさ コンテストで\nゆうしょうした この ポケモンを\lきょうは かしこさ コンテストで\lゆうしょう させたんだぜ！\pああ じぶんの さいのうが こわい……{EOS}"
	.if (. - gText_Rom_207A83) > 0x51
	.error "gText_Rom_207A83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207A83) < 0x51
	.space 0x51 - (. - gText_Rom_207A83)
	.endif
