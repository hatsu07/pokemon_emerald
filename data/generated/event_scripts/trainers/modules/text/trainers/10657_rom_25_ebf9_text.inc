	@ data/text/trainers.inc:2075 Route119_Text_HideoPostBattle
	.globl gText_Rom_25EBF9
gText_Rom_25EBF9: @ 0x0825EBF9
	.string "きを かくすなら もりのなか!\nポケモンを かくすなら ポケモンのなか!\pとくに いみは ないでござる{EOS}"
	.if (. - gText_Rom_25EBF9) > 0x34
	.error "gText_Rom_25EBF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBF9) < 0x34
	.space 0x34 - (. - gText_Rom_25EBF9)
	.endif
