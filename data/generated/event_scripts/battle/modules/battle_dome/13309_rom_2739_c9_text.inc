	@ src/battle_dome.c:866 battle_dome_line_866
	.globl gText_Rom_2739C9
gText_Rom_2739C9: @ 0x082739C9
	.string "こんたいかい ちゅうもくの ダークホース!{EOS}"
	.if (. - gText_Rom_2739C9) > 0x16
	.error "gText_Rom_2739C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739C9) < 0x16
	.space 0x16 - (. - gText_Rom_2739C9)
	.endif
