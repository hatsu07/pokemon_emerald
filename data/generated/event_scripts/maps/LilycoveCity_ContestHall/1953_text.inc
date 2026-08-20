	@ data/maps/LilycoveCity_ContestHall/scripts.inc:382 LilycoveCity_ContestHall_Text_InTheMiddleOfContest
	.globl gText_Rom_20800D
gText_Rom_20800D: @ 0x0820800D
	.string "しかい『あら あらー！\nいまは コンテスト ちゅう ですよー！\pうけつけで エントリー してから\nでて くださーい！ ねっ！{EOS}"
	.if (. - gText_Rom_20800D) > 0x3f
	.error "gText_Rom_20800D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20800D) < 0x3f
	.space 0x3f - (. - gText_Rom_20800D)
	.endif
