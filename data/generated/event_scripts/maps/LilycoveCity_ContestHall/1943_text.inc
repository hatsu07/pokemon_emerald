	@ data/maps/LilycoveCity_ContestHall/scripts.inc:367 LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam
	.globl gText_Rom_207EDA
gText_Rom_207EDA: @ 0x08207EDA
	.string "この まぶしすぎる オーロラビームに\nしんさいんも めを あけられない！\p……あれ?\nそれじゃ いみが ないのか?$"
	.if (. - gText_Rom_207EDA) > 0x3a
	.error "gText_Rom_207EDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207EDA) < 0x3a
	.space 0x3a - (. - gText_Rom_207EDA)
	.endif
