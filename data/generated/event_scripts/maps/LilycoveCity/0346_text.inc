	@ data/maps/LilycoveCity/scripts.inc:410 LilycoveCity_Text_MayShoppingLetsBattle
	.globl gText_Rom_1E0696
gText_Rom_1E0696: @ 0x081E0696
	.string "ハルカ『あら!?\n{PLAYER}{KUN}も おかいもの?\pあたし ぬいぐるみとか ポスター\nいっぱい かっちゃった!\pもちろん ポケモン いっぱい つかまえたし\nちゃんと そだてて いるんだから!\pあたし としては {PLAYER}{KUN}が\nポケモン そだててるか しんぱい だな\pしょうぶ してあげるから\n{PLAYER}{KUN}の ポケモン みせてよ!{EOS}"
	.if (. - gText_Rom_1E0696) > 0x9d
	.error "gText_Rom_1E0696 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0696) < 0x9d
	.space 0x9d - (. - gText_Rom_1E0696)
	.endif
