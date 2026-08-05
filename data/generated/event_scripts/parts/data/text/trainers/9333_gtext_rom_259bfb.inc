	@ data/text/trainers.inc:157 Route103_Text_IsabellePostBattle
	.globl gText_Rom_259BFB
gText_Rom_259BFB: @ 0x08259BFB
	.string "わたし およぎが へたで\nれんしゅう してたのよ……\lぶつかりそうに なって ゴメンね"
	.byte EOS
	.if (. - gText_Rom_259BFB) > 0x2c
	.error "gText_Rom_259BFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259BFB) < 0x2c
	.space 0x2c - (. - gText_Rom_259BFB)
	.endif
