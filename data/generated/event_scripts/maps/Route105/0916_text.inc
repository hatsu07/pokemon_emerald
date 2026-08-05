	@ data/maps/Route105/scripts.inc:79 Route104_Text_DadPokenavCall
	.globl gText_Rom_1E82F9
gText_Rom_1E82F9: @ 0x081E82F9
	.string "……　……　……\n……　……　……　ピッ!\pパパ『おお　{PLAYER}か!\p……　……　……\nおまえは　いま　どこに　いるんだ?\nずいぶん　かぜの　おとが　つよいな\p……そうそう　デボンの　ツワブキさんから\nポケナビの　ことを　きいたもんでな\lちょっと　よびだして　みたんだ!\pげんきで　やってるなら　それでよし!\nじゃあ　きをつけてな!\p……　……　……\n……　……　……　ツー$"
	.if (. - gText_Rom_1E82F9) > 0xba
	.error "gText_Rom_1E82F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E82F9) < 0xba
	.space 0xba - (. - gText_Rom_1E82F9)
	.endif
