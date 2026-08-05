	@ data/text/trainers.inc:872 Route110_Text_TimmyPostBattle
	.globl gText_Rom_25B944
gText_Rom_25B944: @ 0x0825B944
	.string "つかまえた ばかりの ポケモンじゃ\nうまく たたかえないや!$"
	.if (. - gText_Rom_25B944) > 0x1f
	.error "gText_Rom_25B944 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B944) < 0x1f
	.space 0x1f - (. - gText_Rom_25B944)
	.endif
