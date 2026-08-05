	@ data/maps/SootopolisCity_Mart/scripts.inc:61 SootopolisCity_Mart_Text_FullRestoreItemOfDreams
	.globl gText_Rom_20F299
gText_Rom_20F299: @ 0x0820F299
	.string "かいふくのくすり ごぞんじ ですか?\pポケモンの たいりょく ぜんかい!\nじょうたい いじょうも すべて かいふく!\lまさに ゆめのような どうぐ なのです$"
	.if (. - gText_Rom_20F299) > 0x4f
	.error "gText_Rom_20F299 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F299) < 0x4f
	.space 0x4f - (. - gText_Rom_20F299)
	.endif
