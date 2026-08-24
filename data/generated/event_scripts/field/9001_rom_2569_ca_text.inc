	@ field-script:0x25692B FieldScriptText_256985
	.globl gText_Rom_256985
gText_Rom_256985: @ 0x08256985
	.string "ふかい　うみだ！\nポケモンの　わざで　もぐれるかも？"
	.byte EOS
	.if (. - gText_Rom_256985) > 0x1b
	.error "gText_Rom_256985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256985) < 0x1b
	.space 0x1b - (. - gText_Rom_256985)
	.endif
	@ field-script:0x256907 FieldScriptText_2569A0
	.globl gText_Rom_2569A0
gText_Rom_2569A0: @ 0x082569A0
	.string "ふかい　うみだ！\nダイビングを　つかいますか？"
	.byte EOS
	.if (. - gText_Rom_2569A0) > 0x18
	.error "gText_Rom_2569A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2569A0) < 0x18
	.space 0x18 - (. - gText_Rom_2569A0)
	.endif
	@ field-script:0x25691A FieldScriptText_2569B8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2569B8
gText_Rom_2569B8: @ 0x082569B8
	.string "{0xFD}{0x02}　は　ダイビングを　つかった！"
	.byte EOS
	.if (. - gText_Rom_2569B8) != 0x12
	.error "gText_Rom_2569B8 must retain its original byte length"
	.endif
	@ field-script:0x256977 FieldScriptText_2569CA
	.globl gText_Rom_2569CA
gText_Rom_2569CA: @ 0x082569CA
	.string "うえから　ひかりが　さしこんでいる！\nポケモンの　わざで　ふじょうできるかも？"
	.byte EOS
	.if (. - gText_Rom_2569CA) > 0x28
	.error "gText_Rom_2569CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2569CA) < 0x28
	.space 0x28 - (. - gText_Rom_2569CA)
	.endif
