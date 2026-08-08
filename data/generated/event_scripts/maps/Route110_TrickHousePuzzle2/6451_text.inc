	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:111 Route110_TrickHousePuzzle2_Text_TedPostBattle
	.globl gText_Rom_23E209
gText_Rom_23E209: @ 0x0823E209
	.string "きみ ぼくの かわりに\nスイッチ ぜんぶ おしてきてよ!$"
	.if (. - gText_Rom_23E209) > 0x1d
	.error "gText_Rom_23E209 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E209) < 0x1d
	.space 0x1d - (. - gText_Rom_23E209)
	.endif
