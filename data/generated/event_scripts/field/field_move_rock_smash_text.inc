	@ field-script:0x2566A2 FieldScriptText_256710
	.globl FieldScriptText_256710
FieldScriptText_256710: @ 0x08256710
	.string "ポケモンの　わざで　こわせそうだ！\n……いわくだきを　つかいますか？"
	.byte EOS
	.if (. - FieldScriptText_256710) > 0x23
	.error "FieldScriptText_256710 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_256710) < 0x23
	.space 0x23 - (. - FieldScriptText_256710)
	.endif
	@ field-script:0x256705 FieldScriptText_256733
	.globl FieldScriptText_256733
FieldScriptText_256733: @ 0x08256733
	.string "かたそうな　いわ　だけど……\nポケモンの　わざで　こわせるかも？"
	.byte EOS
	.if (. - FieldScriptText_256733) > 0x21
	.error "FieldScriptText_256733 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_256733) < 0x21
	.space 0x21 - (. - FieldScriptText_256733)
	.endif
