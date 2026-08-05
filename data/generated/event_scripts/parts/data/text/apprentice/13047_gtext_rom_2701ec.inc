	@ data/text/apprentice.inc:487 gText_ApprenticeWhichMonFirst1
	.globl gText_Rom_2701EC
gText_Rom_2701EC: @ 0x082701EC
	.string "わわっ! {PLAYER}さんだー!\nわーい あえて よかった\lそうだん したいことが あるんだ!\pあのね ぼくの もってる\nポケモン たちの なかで\lどれを さいしょに だせば\lいいと おもう?"
	.byte EOS
	.if (. - gText_Rom_2701EC) > 0x5d
	.error "gText_Rom_2701EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2701EC) < 0x5d
	.space 0x5d - (. - gText_Rom_2701EC)
	.endif
