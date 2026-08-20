	@ data/text/trainers.inc:3389 Route134_Text_AaronPostBattle
	.globl gText_Rom_2621CF
gText_Rom_2621CF: @ 0x082621CF
	.string "りゅうせいのたきで\nしゅぎょう しなおすと しよう!\pよければ きみも いってみたまえ\nきっと いまより つよくなる!{EOS}"
	.if (. - gText_Rom_2621CF) > 0x3c
	.error "gText_Rom_2621CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2621CF) < 0x3c
	.space 0x3c - (. - gText_Rom_2621CF)
	.endif
