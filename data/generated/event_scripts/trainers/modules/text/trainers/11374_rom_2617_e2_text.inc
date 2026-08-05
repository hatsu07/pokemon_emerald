	@ data/text/trainers.inc:3140 Route131_Text_RichardPostBattle
	.globl gText_Rom_2617E2
gText_Rom_2617E2: @ 0x082617E2
	.string "ひいひい…… つかれた……\nいきは よいよい かえりは こわい……\lかえりの たいりょく のこってるかなあ……$"
	.if (. - gText_Rom_2617E2) > 0x38
	.error "gText_Rom_2617E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2617E2) < 0x38
	.space 0x38 - (. - gText_Rom_2617E2)
	.endif
