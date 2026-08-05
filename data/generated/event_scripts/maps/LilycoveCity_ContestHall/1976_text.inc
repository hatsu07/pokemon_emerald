	@ data/maps/LilycoveCity_ContestHall/scripts.inc:415 LilycoveCity_ContestHall_Text_CuteContestStage
	.globl gText_Rom_208209
gText_Rom_208209: @ 0x08208209
	.string "かわいさコンテスト ステージ\nキュートな ポケモンに ウキウキ！$"
	.if (. - gText_Rom_208209) > 0x21
	.error "gText_Rom_208209 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208209) < 0x21
	.space 0x21 - (. - gText_Rom_208209)
	.endif
