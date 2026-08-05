	@ data/maps/LilycoveCity_ContestHall/scripts.inc:412 LilycoveCity_ContestHall_Text_BeautyContestStage
	.globl gText_Rom_2081E5
gText_Rom_2081E5: @ 0x082081E5
	.string "うつくしさコンテスト ステージ\nビューティフル ポケモンに クラクラ！$"
	.if (. - gText_Rom_2081E5) > 0x24
	.error "gText_Rom_2081E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2081E5) < 0x24
	.space 0x24 - (. - gText_Rom_2081E5)
	.endif
