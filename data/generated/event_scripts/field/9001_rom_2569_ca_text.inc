	@ field-script:0x25692B FieldScriptText_256985
	.globl FieldScriptText_256985
FieldScriptText_256985: @ 0x08256985
	.string "ふかい　うみだ！\nポケモンの　わざで　もぐれるかも？"
	.byte EOS
	.if (. - FieldScriptText_256985) > 0x1b
	.error "FieldScriptText_256985 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_256985) < 0x1b
	.space 0x1b - (. - FieldScriptText_256985)
	.endif
	@ field-script:0x256907 FieldScriptText_2569A0
	.globl FieldScriptText_2569A0
FieldScriptText_2569A0: @ 0x082569A0
	.string "ふかい　うみだ！\nダイビングを　つかいますか？"
	.byte EOS
	.if (. - FieldScriptText_2569A0) > 0x18
	.error "FieldScriptText_2569A0 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2569A0) < 0x18
	.space 0x18 - (. - FieldScriptText_2569A0)
	.endif
	@ field-script:0x25691A FieldScriptText_2569B8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_2569B8
FieldScriptText_2569B8: @ 0x082569B8
	.string "{0xFD}{0x02}　は　ダイビングを　つかった！"
	.byte EOS
	.if (. - FieldScriptText_2569B8) != 0x12
	.error "FieldScriptText_2569B8 must retain its original byte length"
	.endif
	@ field-script:0x256977 FieldScriptText_2569CA
	.globl FieldScriptText_2569CA
FieldScriptText_2569CA: @ 0x082569CA
	.string "うえから　ひかりが　さしこんでいる！\nポケモンの　わざで　ふじょうできるかも？"
	.byte EOS
	.if (. - FieldScriptText_2569CA) > 0x28
	.error "FieldScriptText_2569CA may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2569CA) < 0x28
	.space 0x28 - (. - FieldScriptText_2569CA)
	.endif
