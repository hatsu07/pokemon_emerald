	@ data/maps/SootopolisCity/scripts.inc:1486 SootopolisCity_Text_KyogreCalmDown
	.globl gText_Rom_1E343A
gText_Rom_1E343A: @ 0x081E343A
	.string "アオギリ『カイオーガ! どうした!?\nこれを みろ! べにいろのたま だぞ!\lおとなしくなるんだ! カイオーガ!\p…… …… ……\n…… …… ……\pだめだ! ぜんぜん きかない!{EOS}"
	.if (. - gText_Rom_1E343A) > 0x5b
	.error "gText_Rom_1E343A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E343A) < 0x5b
	.space 0x5b - (. - gText_Rom_1E343A)
	.endif
