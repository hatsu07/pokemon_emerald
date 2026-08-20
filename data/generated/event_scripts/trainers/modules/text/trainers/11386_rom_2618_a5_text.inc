	@ data/text/trainers.inc:3158 Route131_Text_SusiePostBattle
	.globl gText_Rom_2618A5
gText_Rom_2618A5: @ 0x082618A5
	.string "あっちで うみは あきた とか いってる\nおとこが いるでしょ?\pアレ くちだけ なのよ\nホントは うみが すきで しょうがないの!{EOS}"
	.if (. - gText_Rom_2618A5) > 0x43
	.error "gText_Rom_2618A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2618A5) < 0x43
	.space 0x43 - (. - gText_Rom_2618A5)
	.endif
