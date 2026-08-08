	@ data/maps/MagmaHideout_3F_2R/scripts.inc:9 MagmaHideout_3F_2R_Text_Grunt10Intro (+1 aliases)
	.globl gText_Rom_21C7BC
gText_Rom_21C7BC: @ 0x0821C7BC
	.string "あのな リーダーの いうことは\nオレにも よく わかるんだけど な\pちょうこだいポケモンを ほりだしたり\nひとの いんせきを よこどりしたり\lなんか それって ちょっと やりすぎ\lのような きもするんだよ な\pおまえ どう おもう?"
	.byte EOS
	.if (. - gText_Rom_21C7BC) > 0x75
	.error "gText_Rom_21C7BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C7BC) < 0x75
	.space 0x75 - (. - gText_Rom_21C7BC)
	.endif
