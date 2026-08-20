	@ data/text/trainers.inc:3143 Route131_Text_HermanIntro (+1 aliases)
	.globl gText_Rom_26181A
gText_Rom_26181A: @ 0x0826181A
	.string "うみ うみ うみ……\nみわたす かぎり うみ……\lうみは もう あきたぞーっ!{EOS}"
	.if (. - gText_Rom_26181A) > 0x28
	.error "gText_Rom_26181A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26181A) < 0x28
	.space 0x28 - (. - gText_Rom_26181A)
	.endif
