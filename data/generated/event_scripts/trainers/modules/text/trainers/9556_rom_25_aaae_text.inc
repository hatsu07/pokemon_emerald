	@ data/text/trainers.inc:488 Route107_Text_RayDefeated (+1 aliases)
	.globl gText_Rom_25AAAE
gText_Rom_25AAAE: @ 0x0825AAAE
	.string "シン『ひゃー\nつよさの レベルが ちがいすぎるや{EOS}"
	.if (. - gText_Rom_25AAAE) > 0x19
	.error "gText_Rom_25AAAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AAAE) < 0x19
	.space 0x19 - (. - gText_Rom_25AAAE)
	.endif
