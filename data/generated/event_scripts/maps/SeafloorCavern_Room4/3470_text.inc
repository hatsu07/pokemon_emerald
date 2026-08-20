	@ data/maps/SeafloorCavern_Room4/scripts.inc:20 SeafloorCavern_Room4_Text_Grunt3PostBattle
	.globl gText_Rom_21897A
gText_Rom_21897A: @ 0x0821897A
	.string "でぐちが わかんねーんだよ\pこわがってる わけじゃ ねーぞ\nかんちがい すんなよ!{EOS}"
	.if (. - gText_Rom_21897A) > 0x2a
	.error "gText_Rom_21897A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21897A) < 0x2a
	.space 0x2a - (. - gText_Rom_21897A)
	.endif
