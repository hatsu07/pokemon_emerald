	@ field-script:0x2566A2 FieldScriptText_256710
	.globl gText_Rom_256710
gText_Rom_256710: @ 0x08256710
	.string "ポケモンの　わざで　こわせそうだ！\n……いわくだきを　つかいますか？"
	.byte EOS
	.if (. - gText_Rom_256710) > 0x23
	.error "gText_Rom_256710 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256710) < 0x23
	.space 0x23 - (. - gText_Rom_256710)
	.endif
