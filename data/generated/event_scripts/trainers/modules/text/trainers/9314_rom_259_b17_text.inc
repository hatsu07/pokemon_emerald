	@ data/text/trainers.inc:130 Route103_Text_MiguelRegister
	.globl gText_Rom_259B17
gText_Rom_259B17: @ 0x08259B17
	.string "なんどでも かわいい ポケモンちゃんを\nみにきて もらうんだからね!"
	.byte EOS
	.if (. - gText_Rom_259B17) > 0x23
	.error "gText_Rom_259B17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259B17) < 0x23
	.space 0x23 - (. - gText_Rom_259B17)
	.endif
