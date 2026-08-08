	@ data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc:129 BattleFrontier_BattlePalaceCorridor_Text_LetMonDoWhatItLikes
	.globl gText_Rom_22B096
gText_Rom_22B096: @ 0x0822B096
	.string "にがてなこと よりも とくいな こと……\pポケモンの きもちに なって\nおぼえさせる わざを かんがえて みろ$"
	.if (. - gText_Rom_22B096) > 0x38
	.error "gText_Rom_22B096 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B096) < 0x38
	.space 0x38 - (. - gText_Rom_22B096)
	.endif
