	@ data/maps/LavaridgeTown/scripts.inc:354 LavaridgeTown_Text_HotSpringsNeverRunDry
	.globl gText_Rom_1E5C87
gText_Rom_1E5C87: @ 0x081E5C87
	.string "くめども くめども おゆが でる\nポットでも ないのに おゆが でる\p……ふしぎ じゃろ?\pかざんが ちかくに あるところ では\nちかすいが ようがんの ねつで\lあたためられて いるのじゃよ!$"
	.if (. - gText_Rom_1E5C87) > 0x61
	.error "gText_Rom_1E5C87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5C87) < 0x61
	.space 0x61 - (. - gText_Rom_1E5C87)
	.endif
