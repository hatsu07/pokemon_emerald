	@ data/maps/LilycoveCity_ContestHall/scripts.inc:328 LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest
	.globl gText_Rom_207BF9
gText_Rom_207BF9: @ 0x08207BF9
	.string "しんさいん『コンテスト たのしんでますか?\pおともだちを 3にん つれてくれば\n4にん いっしょに さんか できますよ！{EOS}"
	.if (. - gText_Rom_207BF9) > 0x3d
	.error "gText_Rom_207BF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207BF9) < 0x3d
	.space 0x3d - (. - gText_Rom_207BF9)
	.endif
