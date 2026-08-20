	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:344 MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat (+1 aliases)
	.globl gText_Rom_20D55A
gText_Rom_20D55A: @ 0x0820D55A
	.string "コップいっぱいで いいから\nねんりょう くれない？{EOS}"
	.if (. - gText_Rom_20D55A) > 0x1a
	.error "gText_Rom_20D55A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D55A) < 0x1a
	.space 0x1a - (. - gText_Rom_20D55A)
	.endif
