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
